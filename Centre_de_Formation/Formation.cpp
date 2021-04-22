#include "Formation.h"

Formation::Formation(string nom, string level, float price, int j, int m, int a, int j1, int m1, int a1, int h, int min, int h1, int min1, Formateur f) :nom_formation(nom), niveau(level),prix(price), dateDebutFormation(j, m, a), dateFinFormation(j1, m1, a1), heureDeDebutFormation(h,min), heureDeFinFormation(h1,min1)
{
	formateur = f;
}



Formation::~Formation(void)
{
}
