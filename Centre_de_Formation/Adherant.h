#pragma once
#include<string>
#include<iostream>
#include "Date.h"
using namespace std;


class Adherant
{

protected:
    string nom;
    Date date;
    int cin;
    int numTel;
    string email;
public:
    Adherant(string = "", int = 0, int = 0, int = 0, int = 0, int = 0, string = "");
    friend ostream& operator<<(ostream&, Adherant&);
    friend istream& operator>>(istream&, Adherant&);
    ~Adherant(void);
    void operator=(const Adherant&);

};

