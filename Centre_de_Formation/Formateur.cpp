#include "Formateur.h"

Formateur::~Formateur(void)
{
}

Formateur::Formateur(string name, int j, int m, int a, int cinn, int num, string mail, string occupation) :Adherant(name, j, m, a, cinn, num, mail), profession(occupation)
{
}

void Formateur::operator=(const Formateur& f)
{
	Adherant::operator=(f);
	profession = f.profession;
}
