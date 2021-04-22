#include "Formation.h"

Formation::Formation(void)
{
}

Formation::Formation(string nom, string level, float price, int j, int m, int a, int j1, int m1, int a1, int h, int min, int h1, int min1, Formateur f) :nom_formation(nom), niveau(level),prix(price), dateDebutFormation(j, m, a), dateFinFormation(j1, m1, a1), heureDeDebutFormation(h,min), heureDeFinFormation(h1,min1)
{
	formateur = f;
}

void Formation::operator=(const Formation& f )
{
	nom_formation = f.nom_formation;
	niveau = f.niveau; 
	prix = f.prix; 
	dateDebutFormation = f.dateDebutFormation; 
	dateFinFormation = f.dateFinFormation;
	heureDeDebutFormation = f.heureDeDebutFormation; 
	heureDeFinFormation = f.heureDeFinFormation; 
	formateur = f.formateur; 
}



Formation::~Formation(void)
{
}
