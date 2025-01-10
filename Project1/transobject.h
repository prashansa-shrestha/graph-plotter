#pragma once
using namespace System;

public ref class Transaction
{
public:
    // Properties
    String^ Type;           // "Income" or "Expense"
   DateTime Date;          // Date of the transaction
    double Amount;          // Amount of the transaction
    String^ title;    // Description of the transaction
    String^ category;       // Category (optional, mainly for expenses)

    // Constructor for expenses with category
   
    Transaction(String^ type, DateTime date, double amount, String^ Title)
    {
        Type = type;
        Date = date;
        Amount = amount;
        title = Title;
    }
    // Constructor for incomes without category
 
};
