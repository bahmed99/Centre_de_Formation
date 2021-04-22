#pragma once
#include "Temps.h"
#include "Date.h"
#include<iostream>
using namespace std;

class Disponibilite
{

protected : 
	Date date; 
	Temps temps; 
public : 
	Disponibilite(Date, Temps);
	~Disponibilite(void); 
};

