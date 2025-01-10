#pragma once
/*#include <SQL.h>*/

#using <System.Data.dll>


using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace MySql::Data::MySqlClient;




public ref class DatabaseManager
{
private:
    // Define your connection string directly within the class
    String^ connectionString = "Server=localhost;Database=haha;Uid=root;Pwd=sqlroot123;";
    MySqlConnection^ connection;

public:
    DatabaseManager()
    {
        // Constructor initializes the SqlConnection object
        connection = gcnew MySqlConnection(connectionString);
    }




    void connect()
    {
        try
        {
            connection->Open();
        }
        catch (MySqlException^ ex)
        {
            // Handle connection error
            Console::WriteLine("Error connecting to database: " + ex->Message);
        }
    }

    void disconnect()
    {
        if (connection != nullptr && connection->State == ConnectionState::Open)
        {
            // Close the connection if it's open
            connection->Close();
        }
    }

    MySqlDataReader^ executeQuery(MySqlCommand^ command)
    {
  
        // Execute the command and return a SqlDataReader
        return command->ExecuteReader();
    }



    int executeNonQuery(MySqlCommand^ command)
    {

        return command->ExecuteNonQuery();
       
    }
    MySqlConnection^ getConnection()
    {
        // Return the SqlConnection object for use in other classes
        return connection;
    }


};

