#pragma once
#include "dbclass.h"
#include "User.h"
public ref class UserManager
{
private:
    DatabaseManager^ dbManager; // DatabaseManager object for database operations

public:
    UserManager()
    {
        dbManager = gcnew DatabaseManager(); // Initialize DatabaseManager
    }



    
    bool addUser(String^ email, String^ username, String^ password)
    {
        try
        {
            dbManager->connect();

            // Create the query with parameters to insert a new user
            String^ query = "INSERT INTO users (email,username,password) VALUES (@email, @username,@password)";

            // Execute the query using DatabaseManager's executeNonQuery method
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("@email", email);
            cmd->Parameters->AddWithValue("@username", username);
            cmd->Parameters->AddWithValue("@password", password);

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



    User^ AuthenticateUser(String^ username, String^ password)
    {
        try
        {
            dbManager->connect();
            String^ query = "SELECT userid,username FROM users WHERE username = @username AND password = @password";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, dbManager->getConnection());
            cmd->Parameters->AddWithValue("@username", username);
            cmd->Parameters->AddWithValue("@password", password);

            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read())
            {
                int userid = reader->GetInt32(reader->GetOrdinal("userid"));
                String^ retrievedUsername = reader->GetString(reader->GetOrdinal("username"));
               
                return gcnew User(userid, retrievedUsername);
            }
            return nullptr;
        }
        catch (Exception^ ex)
        {
            // Handle or log the exception
            Console::WriteLine("Error authenticating user: " + ex->Message);
            return nullptr;
        }
        finally
        {
            dbManager->disconnect();
        }
    }
    // Add other methods as needed, such as updateUser, deleteUser, etc.
};
