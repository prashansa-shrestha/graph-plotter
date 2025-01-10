#pragma once

using namespace System;

public ref class User
{
public:
    int userid;
    String^ username;
  


    User(int id, String^ username)
        : userid(id), username(username){}
};
