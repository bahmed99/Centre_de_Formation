#pragma once
#include "ServiceReservation.h"
#include<string>

class Materiels :public ServiceReservation
{
protected:
    string nom_mat;
    int qnt;
public:
    Materiels(string = "", int = 0);
    
    ~Materiels(void);
};

