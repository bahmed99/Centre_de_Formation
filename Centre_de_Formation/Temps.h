#pragma once
#include<iostream>
using namespace std;


class Temps
{
protected :
	int minute;
	int heure;
public: 
	Temps(int = 0, int = 0);
	~Temps(void);

	void operator =(const Temps&);
	friend ostream& operator<<(ostream&, Temps&);
	friend istream& operator>>(istream&, Temps&);
};

