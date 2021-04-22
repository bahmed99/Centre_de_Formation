#pragma once
#include<string>
#include<iostream>
#include "Date.h"
using namespace std;


class ServiceReservation
{
protected : 
    string disp;
    int num;
public:
    ServiceReservation(string = "", int = 0);
   
    ~ServiceReservation(void);
};


