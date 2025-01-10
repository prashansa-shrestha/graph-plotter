#pragma once


#include "dbclass.h"

#include "User.h"
using namespace System::Collections::Generic;
public ref class GoalManager
{
private:
    DatabaseManager^ dbManager; // DatabaseManager object for database operations
    User^ currentUser;

public:
    GoalManager(User^ user)
    {
        currentUser = user;
        dbManager = gcnew DatabaseManager();
    }

    bool addAmount(String^ category, double expectedAmount)
    {
        try
        {
            dbManager->connect();

            // Create the query with parameters to insert the amount, frequency, and expected amount
            String^ query = "INSERT INTO goals (category, expectedAmount,userid) VALUES (@category, @expectedAmount,@userid)";

            // Execute the query using DatabaseManager's executeNonQuery method
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
      
            cmd->Parameters->AddWithValue("@category", category);
           
            cmd->Parameters->AddWithValue("@expectedAmount", expectedAmount);
            cmd->Parameters->AddWithValue("@userid", currentUser->userid);
       
            int result = dbManager->executeNonQuery(cmd); // Execute the query

            dbManager->disconnect();

            return (result > 0); // Return true if insertion was successful
        }

        catch (MySqlException^ ex)
        {
            // Handle or log the exception
            Console::WriteLine(ex->Message);
            dbManager->disconnect();
            return false;
        }
    }


    double getExpectedValue(String^ category)
    {
        double expectedValue = 0.0;
        try
        {
            dbManager->connect();

            // Create the query to fetch the expected value
            String^ query = "SELECT expectedAmount FROM goals WHERE category=@category AND userid=@userid";
           

            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("@category", category);
            cmd->Parameters->AddWithValue("@userid", currentUser->userid);


          
            MySqlDataReader^ reader = cmd->ExecuteReader();
            int amountOrdinal = reader->GetOrdinal("expectedAmount");
            if (reader->Read())
            {
                expectedValue = reader->GetDouble(amountOrdinal);
            }

            dbManager->disconnect();
        }
        catch (MySqlException^ ex)
        {
            // Handle or log the exception
            Console::WriteLine(ex->Message);
            dbManager->disconnect();
        }

        return expectedValue;
    }




    List<Tuple<String^, double>^>^ getTotalExpensesByCategory()
    {
        List<Tuple<String^, double>^>^ expensesList = gcnew List<Tuple<String^, double>^>();

        try
        {
            dbManager->connect();

            // Create the query to get total expenses by category
            String^ query = "SELECT category, SUM(Amount) AS totalAmount FROM expenses WHERE userid=@userid GROUP BY category";

            // Prepare the command with parameters
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("@userid",currentUser->userid );

            // Execute the query and get the result
            MySqlDataReader^ reader = cmd->ExecuteReader();
            int categoryOrdinal = reader->GetOrdinal("category");
            int amountOrdinal = reader->GetOrdinal("totalAmount");
            while (reader->Read())
            {
                String^ category = reader->GetString(categoryOrdinal);
                double totalAmount = reader->GetDouble(amountOrdinal);
                expensesList->Add(gcnew Tuple<String^, double>(category, totalAmount));
            }

            reader->Close();
            dbManager->disconnect();
        }
        catch (MySqlException^ ex)
        {
            // Handle or log the exception
            Console::WriteLine(ex->Message);
            dbManager->disconnect();
        }

        return expensesList;
    }

   
};

