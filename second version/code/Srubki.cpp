#include "Srubki.h"
#include"Wyjatki.h"
void Srubki::Wstaw_waga()
{
	cout << "podaj wage srubek: \n";
	const int N = 1000;
	int i;
	try
	{
		

		do {
			if (cin >> this->waga) i = 0;
			else
			{
				cout << "ZLE DANE !" << endl;
				cin.clear();
				cin.ignore(N, '\n');
				i = 1;
			}
		} while (i != 0);
		if (waga < 0)
			throw exc_argument(waga);
	}
	catch (const out_of_range& ex) 
	{
		cout << "error: " << ex.what() << endl; 
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	
}
void Srubki::Wypisz_waga()
{
	cout << "waga srubek: " << this->waga << "\n";
}

void Srubki::wstaw()
{
	Produkty::wstaw();
	Wstaw_waga();

}
void Srubki::wypisz()
{
	Produkty::wypisz();
	Wypisz_waga();
}
 void Srubki::zapisz(std::ostream& o) const
{
	 o << "Srubki" << endl;
	Produkty::zapisz(o);
	o <<"waga "<< waga << endl;
}
