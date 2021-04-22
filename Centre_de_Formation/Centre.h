#pragma once
#include "Reservation.h"

#include<vector>
#include "Salle.h"
#include "Materiels.h"
using namespace std; 
class Centre
{
protected:
	vector<Reservation> reservation; 
	vector<Salle> salles; 
	vector<Materiels> materiels; 

public : 
	Centre();
	~Centre();

};

