#pragma once
#include "dbclass.h"
#include "incomeobject.h"
#include "User.h"
using namespace System::Collections::Generic;


public ref class IncomeManager
{
private:
    DatabaseManager^ dbManager;
    User^ currentUser;


public:
    IncomeManager(User^ user) {
        currentUser = user;
        dbManager = gcnew DatabaseManager();
    }









    /*void setCurrentUser(User^ user) { currentUser = user; }*/

    bool addIncome(String^ title,  System::DateTime Date, float Amount, int userid)
    {
        try
        {
            dbManager->connect();
            String^ query = "INSERT INTO income (title,Date,Amount,userid) VALUES (@title, @Date, @Amount,@userid)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

            cmd->Parameters->AddWithValue("@title", title);
            cmd->Parameters->AddWithValue("@Date", Date);
            cmd->Parameters->AddWithValue("@Amount", Amount);
            cmd->Parameters->AddWithValue("@userid", userid);

            int result = dbManager->executeNonQuery(cmd);
            return (result > 0);
        }

        catch (Exception^ ex)
        {
            // Handle or log the exception
            return false;
        }
        finally
        {
            dbManager->disconnect();
        }
    }



    List<Income^>^ getIncomes()
    {
        List<Income^>^ incomes = gcnew List<Income^>();
        try
        {
            dbManager->connect();
            String^ query = "SELECT * FROM income WHERE userid = @userid";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("@userid", currentUser->userid);

            MySqlDataReader^ reader = dbManager->executeQuery(cmd);

            int incomeidOrdinal = reader->GetOrdinal("incomeid");
            int dateOrdinal = reader->GetOrdinal("Date");
            int amountOrdinal = reader->GetOrdinal("Amount");
            
            int useridOrdinal = reader->GetOrdinal("userid");
            int titleOrdinal = reader->GetOrdinal("title");

            while (reader->Read())
            {
                Income^ income = gcnew Income();
                /*
                expense->expenseid = safe_cast<int>(reader["expenseid"]);
                expense->Date = safe_cast<DateTime>(reader["Date"]);
                expense->Amount = safe_cast<double>(reader["Amount"]);
                expense->category = reader["category"]->ToString();
                expense->userid = safe_cast<int>(reader["userid"]);
                */

                income->incomeid = reader->GetInt32(incomeidOrdinal);
                income->Date = reader->GetDateTime(dateOrdinal);
                income->Amount = reader->GetDouble(amountOrdinal);
                income->title = reader->GetString(titleOrdinal);
             
                income->userid = reader->GetInt32(incomeidOrdinal);



                incomes->Add(income);
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
        }
        finally
        {
            dbManager->disconnect();
        }
        return incomes;
    }

   

    /*
    bool updateExpense(Expense^ expense)
    {
        try
        {
            dbManager->connect();
            String^ query = "UPDATE Expenses SET Date = @Date, Amount = @Amount, Description = @Description, CategoryID = @CategoryID WHERE ExpenseID = @ExpenseID AND UserID = @UserID";
            SqlCommand^ cmd = gcnew SqlCommand(query, dbManager->getConnection());

            cmd->Parameters->AddWithValue("@ExpenseID", expense->ExpenseID);
            cmd->Parameters->AddWithValue("@UserID", currentUser->UserID);
            cmd->Parameters->AddWithValue("@Date", expense->Date);
            cmd->Parameters->AddWithValue("@Amount", expense->Amount);
            cmd->Parameters->AddWithValue("@Description", expense->Description);
            cmd->Parameters->AddWithValue("@CategoryID", expense->CategoryID);

            int result = dbManager->executeNonQuery(cmd);
            return (result > 0);
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
            return false;
        }
        finally
        {
            dbManager->disconnect();
        }
    }
    */
    /*
    bool deleteExpense(int expenseId)
    {
        try
        {
            dbManager->connect();
            String^ query = "DELETE FROM Expenses WHERE ExpenseID = @ExpenseID AND UserID = @UserID";
            SqlCommand^ cmd = gcnew SqlCommand(query, dbManager->getConnection());

            cmd->Parameters->AddWithValue("@ExpenseID", expenseId);
            cmd->Parameters->AddWithValue("@UserID", currentUser->UserID);

            int result = dbManager->executeNonQuery(cmd);
            return (result > 0);
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
            return false;
        }
        finally
        {
            dbManager->disconnect();
        }
    } */
};
