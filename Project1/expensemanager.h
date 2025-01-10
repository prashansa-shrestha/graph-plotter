#pragma once
#include "dbclass.h"
#include "expenseobject.h"
#include "User.h"
using namespace System::Collections::Generic;
public ref class ExpenseManager
{
private:
    DatabaseManager^ dbManager;
    User^ currentUser;


public:
    ExpenseManager(User^ user)  {
        currentUser = user;
        dbManager = gcnew DatabaseManager();
    }

   







    /*void setCurrentUser(User^ user) { currentUser = user; }*/

    bool addExpense(String^ title, String^ category, System::DateTime Date, float Amount, int userid)
    {
        try
        {
            dbManager->connect();
            String^ query = "INSERT INTO expenses (title,category,Amount,Date,userid) VALUES (@title, @category, @Amount, @Date,@userid)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());

            cmd->Parameters->AddWithValue("@title", title);
            cmd->Parameters->AddWithValue("@category", category);
            cmd->Parameters->AddWithValue("@Amount", Amount);
            cmd->Parameters->AddWithValue("@Date",Date);
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

    

    
    List<Expense^>^ getExpenses()
    {
        List<Expense^>^ expenses = gcnew List<Expense^>();
        try
        {
            dbManager->connect();
            String^ query = "SELECT * FROM Expenses WHERE userid = @userid";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("@userid", currentUser->userid);

            MySqlDataReader^ reader = dbManager->executeQuery(cmd);

            int expenseidOrdinal = reader->GetOrdinal("expenseid");
            int dateOrdinal = reader->GetOrdinal("Date");
            int amountOrdinal = reader->GetOrdinal("Amount");
            int categoryOrdinal = reader->GetOrdinal("category");
            int useridOrdinal = reader->GetOrdinal("userid");
            int titleOrdinal = reader->GetOrdinal("title");

            while (reader->Read())
            {
                Expense^ expense = gcnew Expense();
                /*
                expense->expenseid = safe_cast<int>(reader["expenseid"]);
                expense->Date = safe_cast<DateTime>(reader["Date"]);
                expense->Amount = safe_cast<double>(reader["Amount"]);
                expense->category = reader["category"]->ToString();
                expense->userid = safe_cast<int>(reader["userid"]);
                */

                expense->expenseid = reader->GetInt32(expenseidOrdinal);
                expense->Date = reader->GetDateTime(dateOrdinal);
                expense->Amount = reader->GetDouble(amountOrdinal);
                expense->title = reader->GetString(titleOrdinal);
                expense->category = reader->GetString(categoryOrdinal);
                expense->userid = reader->GetInt32(expenseidOrdinal);



                expenses->Add(expense);
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
        return expenses;
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
