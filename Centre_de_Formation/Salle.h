#pragma once
#include "ServiceReservation.h"
class Salle :public ServiceReservation
{
protected:
    int capSalle;
    
public:
    Salle(int = 0);
    
    ~Salle(void);
};

