#pragma once
#include "dbclass.h"
#include "transobject.h"
#include "User.h"
using namespace System::Collections::Generic;
public ref class TransactionManager
{
private:
    DatabaseManager^ dbManager;
    User^ currentUser;


public:
    TransactionManager(User^ user)
    {
        dbManager = gcnew DatabaseManager();
        currentUser = user;
    }

    List<Transaction^>^ GetRecentTransactions()
    {
        List<Transaction^>^ transactions = gcnew List<Transaction^>();
        try
        {
            dbManager->connect();

            String^ query = "(SELECT 'Income' AS Type, Date, Amount, title FROM income WHERE userid = @userid) " +
                "UNION " +
                "(SELECT 'Expense' AS Type, Date, Amount, title FROM expenses WHERE userid = @userid) " +
                "ORDER BY Date DESC " +
                "LIMIT 10";
        
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("userid", currentUser->userid);
       

            MySqlDataReader^ reader = dbManager->executeQuery(cmd);

            int typeOrdinal = reader->GetOrdinal("Type");
            int dateOrdinal = reader->GetOrdinal("Date");
            int amountOrdinal = reader->GetOrdinal("Amount");
            int titleOrdinal = reader->GetOrdinal("title");

            while (reader->Read())
            {
                Transaction^ transaction = gcnew Transaction
                (
                    reader->GetString(typeOrdinal),
                    reader->GetDateTime(dateOrdinal),
                    reader->GetDouble(amountOrdinal),
                    reader->GetString(titleOrdinal)
                );

                transactions->Add(transaction);
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
            Console::WriteLine(ex->Message);
        }
        finally
        {
            dbManager->disconnect();
        }
        return transactions;
    }
};
