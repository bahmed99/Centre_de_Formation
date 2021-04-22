#pragma once
#include "Formation.h"
#include "ServiceReservation.h"
class Reservation
{
protected: 
	int numRes; 
	vector <ServiceReservation> service; 
	Formation formation; 
public:
	Reservation(int ,Formation); 
	~Reservation(); 
};

