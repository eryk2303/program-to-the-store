#include "Nag³ówek.h"

void Kolekcja::DodajNowy(Produkty & Nowy)
{
	
	if ( ile_elemntow <= 4)
	{
		Produkty_[ile_elemntow] = Nowy;	
		++ile_elemntow;
	}
	else
	{
		Produkty* tmp = new Produkty[ile_elemntow + 1];
		for (int i = 0; i < ile_elemntow; i++)
			tmp[i] = Produkty_[i];
		delete[] Produkty_;
		Produkty_ = tmp;
		
		tmp[ile_elemntow] = Nowy;
		++ile_elemntow;
	}
	
}
void Kolekcja::wypisz()
{
	for(int i = 0; i<ile_elemntow; i++)
	cout << Produkty_[i];
}
int Kolekcja::Ile_elemntow()
{
	return ile_elemntow;
}
