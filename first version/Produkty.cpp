#include "Nag³ówek.h"
istream& operator>>(istream& in, Produkty& z)
{
	
	cout << "Podaj nazwe Poduktu\n";
	in >> z.nazwa;
	cout << "Podaj cena w zl\n";
	in >> z.cena;
	cout << "Wybierz kategorie\n 1 - Narzedzia\n 2- skrzynka na  narzedzia i czesci\n 3 - srubki\n";
	int typ;
	in >> typ;
	switch (typ)
	{
	case 1:
		z.waga = 0;
		z.ilosc = 0;
		break;
	case 2:
		cout << "Podaj liczbe miejsc na narzedzia w skrzynce\n";

		in >> z.ilosc;
		z.waga = 0;
		break;
	case 3:
		cout << "Podaj waga w kg\n ";
		in >> z.waga;
		z.ilosc = 0;
		break;
	}
	return in;
}
ostream& operator<<(ostream& out, Produkty& z)
{
	if (z.waga == 0 && z.ilosc == 0)
		out << "Nazwa " << z.nazwa << "\n" << "cena " << z.cena << " zl \n";
	if (z.waga == 0 && z.ilosc != 0)
		out << "Nazwa " << z.nazwa << "\n" << "cena " << z.cena << "\n" << "Liczba miejsc na narzedzia w skrzynce" << z.ilosc << "\n";
	if (z.waga != 0 && z.ilosc == 0)
		out << "Nazwa " << z.nazwa << "\n" << "cena " << z.cena << "\n" << "waga " << z.waga << " kg \n";
	return out;
}
string Produkty::Nazwa()
{
	return nazwa;
}
int Produkty::Waga()
{
	return waga;
}
int Produkty::Cena()
{
	return cena;
}
int Produkty::Ilosc()
{
	return ilosc;
}
