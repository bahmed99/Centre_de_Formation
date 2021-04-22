#include "Adherant.h"

Adherant::Adherant(string name , int j, int m, int a, int cinn, int num , string mail):nom(name),date(j,m,a),cin(cinn),numTel(num),email(mail)
{

}

Adherant::~Adherant(void)
{
}

void Adherant::operator=(const Adherant& a)
{
	nom = a.nom;
	date = a.date; 
	numTel = a.numTel; 
	email = a.email; 
	cin = a.cin;

}
