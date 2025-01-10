#pragma once

using namespace System;

public ref class Expense
{
public:
  
    DateTime Date;
    float Amount;
    String^ title;
    String^ category;
    int userid;
    int expenseid;
    Expense() {}

    Expense( int expenseid,String^ title, String^ category, DateTime date, double Amount, int userid)
    {
        this->expenseid = expenseid;
        this->Date = date;
        this->Amount = Amount;
        this->category = category;
        this->userid = userid;
        this->title = title;
    }
};

