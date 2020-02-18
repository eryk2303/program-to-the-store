#include "Narzedzia.h"
#include"Wyjatki.h"
void Narzedzia::wstaw()
{
	Produkty::wstaw();
}
void Narzedzia::wypisz()
{
	cout << "Narzedzia\n";
	Produkty::wypisz();
}
/*virtual*/ void Narzedzia::zapisz(std::ostream& o) const 
{
	o << "narzedzia" << endl;
	Produkty::zapisz(o);
}
