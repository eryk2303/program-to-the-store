#include "Skrzynki.h"
#include"Wyjatki.h"
void Skrzynki::Wstaw_ilosc()
{
	cout << "podaj ilosc miejsc w skrzynce: \n";

	const int N = 1000;
	int i;
	try
	{
		do {
			if (cin >> this->ilosc) i = 0;
			else
			{
				cout << "ZLE DANE !" << endl;
				cin.clear();
				cin.ignore(N, '\n');
				i = 1;
			}
		} while (i != 0);
		
		if (ilosc < 0)
			throw exc_argument(ilosc);
		
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
void Skrzynki::Wypisz_ilosc()
{
	cout << "ilosc miejsc w skrzynce: " << this->ilosc << "\n";
}

void Skrzynki::wstaw()
{
	Produkty::wstaw();
	Wstaw_ilosc();
	
}
void Skrzynki::wypisz()
{
	Produkty::wypisz();
	Wypisz_ilosc();
}
/*virtual*/ void Skrzynki::zapisz(std::ostream& o) const
{
	o << "skrzynki" << endl;
	Produkty::zapisz(o);
	o <<"ilosc " << ilosc << endl;
}
