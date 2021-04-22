#include "Temps.h"

Temps::Temps(int h, int m):minute(m),heure(h)
{
}

Temps::~Temps(void)
{
}

void Temps::operator=(const Temps& t)
{
	minute = t.minute; 
	heure = t.heure; 
}
