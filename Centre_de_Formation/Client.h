#pragma once

#include<string>
#include<iostream>
#include "Date.h"
using namespace std;

#include "Adherant.h"
class Client :public Adherant
{
    string fonction;
public:
    Client(string = "", int = 0, int = 0, int = 0, int = 0, int = 0, string = "", string = "");
    ~Client(void);
    friend istream& operator>>(istream&, Client&);
    friend ostream& operator<<(ostream&, Client&);
};

