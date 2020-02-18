#include "Produkty.h"
#include"Wyjatki.h"
void Produkty::Wstaw_nazwe_cene()
{
	cout << "Podaj nazwe produktu \n";
	cin >> this->nazwa;
	cout << "\nPodaj cene produktu \n";
	int i; 
	const int N = 1000;
	try
	{
		do {
			
			if (cin >> cena) i =0;
			else
			{
				cout << "ZLE DANE !" << endl;
				cin.clear();
				cin.ignore(N, '\n');
				i = 1;
			}
		} while (i != 0);
		
		if(cena <0) 
			throw exc_argument(cena);
	}
	catch (const out_of_range& ex) 
	{
		cout << "error: " << ex.what() << endl; 
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	
	
	cout << "\n";

}

void Produkty::Wypisz_nazwe_cene()
{
	cout << "Nazwa: " << this->nazwa << "\n";
	cout << "Cena: " << this->cena << "\n";
}

void Produkty::wypisz()
{
	Wypisz_nazwe_cene();
}
void Produkty::wstaw()
{
	Wstaw_nazwe_cene();

}
 void Produkty::zapisz(ostream& o) const
{
	o << "nazwa " << nazwa << endl;
	o <<"cena " <<  cena << endl;
}
