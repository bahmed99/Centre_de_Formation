#pragma once
#include<string>
#include<iostream>
#include "Date.h"
#include "Disponibilite.h"
#include<vector>
using namespace std;


class ServiceReservation
{
protected : 
    vector <Disponibilite> dispo; 
   
public:
    ServiceReservation(void);
    
    ~ServiceReservation(void);
};

