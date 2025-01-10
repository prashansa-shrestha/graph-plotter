#pragma once

using namespace System;

public ref class Income
{
public:

    DateTime Date;
    float Amount;
    String^ title;
   
    int userid;
    int incomeid;
    Income() {}

    Income(int incomeid, String^ title, DateTime date, double Amount, int userid)
    {
        this->incomeid = incomeid;
        this->Date = date;
        this->Amount = Amount;
    
        this->userid = userid;
        this->title = title;
    }
};

