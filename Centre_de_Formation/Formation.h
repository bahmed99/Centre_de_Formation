#pragma once
#include<string>
#include<iostream>
#include "Date.h"
#include"Temps.h"
#include"Client.h"
#include<vector>
#include "Formateur.h"
using namespace std;



class Formation
{
    string nom_formation;
    string niveau;
    vector <Client> tab;
    float prix;
    Date dateDebutFormation;
    Date dateFinFormation;
    Temps heureDeDebutFormation;
    Temps heureDeFinFormation;
    Formateur formateur;

public:
    Formation(string , string , float, int, int, int, int, int, int, int, int, int, int,Formateur);
   
    ~Formation(void);
    friend ostream& operator<<(ostream&, Formation&);
    friend istream& operator>>(istream&, Formation&);
};

