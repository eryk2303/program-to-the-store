#pragma once

#include <string>
#include<iostream>
#include<fstream>
#include<list>
#include<exception>
using namespace std;
/**Klasa abstrakcyjna Produkty umozliwiajaca wprowadzanie oraz reprezentacjie czesci danych o nowych produktach  */class Produkty
{
protected:
	string nazwa;
	float cena;
	/**metoda wirtualna sluzaca do wprowadzanaia danych z klawiatury  */virtual void wstaw();
	

	/**metoda zapisujaca dane do pliku wprowadzane podczas dzialania programu */virtual void zapisz(std::ostream& o) const;
	
public:
	/**metoda wirtualna wypisujaca dane  */virtual void wypisz();
	/**metoda umozliwiajaca wprowadzenie danych o nazwie i cenie */void Wstaw_nazwe_cene();
	/**metoda wypisujaca dane o nazwie i cenie */void Wypisz_nazwe_cene();

	/**funkcja zaprzyjazniona stumienia wyjscia umozwiawajaca zapis do pliku */friend std::ostream& operator<<(std::ostream& o, Produkty& p)
	{
		p.zapisz(o);
		return o;
	}

};
