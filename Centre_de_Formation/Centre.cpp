#include "Centre.h"

Centre::Centre()
{
	
		salles.push_back(Salle(100));
		salles.push_back(Salle(90));
		salles.push_back(Salle(80));
		salles.push_back(Salle(70));

		materiels.push_back(Materiels("ecran",10));
		materiels.push_back(Materiels("retorprojecteur",8));
		materiels.push_back(Materiels("Pc",40));
		
	
}

Centre::~Centre()
{
}
