#include "Skrzynka_z_srubkami.h"
#include"Wyjatki.h"
void Skrzynka_z_srubkami::wstaw()
{
	
	Skrzynki::wstaw();
	Srubki::Wstaw_waga();
}
void Skrzynka_z_srubkami::wypisz()
{
	Skrzynki::wypisz();
	
	Srubki::Wypisz_waga();
}
/*virtual*/ void Skrzynka_z_srubkami::zapisz(std::ostream& o) const
{
	o << "skrzynki" << endl;
	Skrzynki::zapisz(o);
	o << "waga " << waga << endl;
}
