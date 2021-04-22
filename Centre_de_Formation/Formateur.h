#pragma once
#include "Adherant.h"
class Formateur :public Adherant
{
protected:
    string profession;
public:
    friend ostream& operator<<(ostream&, Formateur&);
    friend istream& operator>>(istream&, Formateur&);
    ~Formateur(void);
    Formateur(string = "", int = 0, int = 0, int = 0, int = 0, int = 0, string = "", string = "");
    void operator=(const Formateur&);
};

