#pragma once

#include "Produkty.h"
/**Klasa pochodna klasy produkty charakteryzujaca skrzynki */class Skrzynki : public virtual Produkty
{
protected:
	double ilosc;
public:
	/**metoda sluzaca do wprwadzania danych o ilosci miejsc w skrzynce, metode ta wykorzystuje funkcja wstaw */void Wstaw_ilosc();
	/**metoda sluzaca do wypisywania danych o ilosci miejsc w skrzynce, metode ta wykorzystuje funkcja wypisz */void Wypisz_ilosc();
	/**metoda  sluzaca do wprowadzanaia danych charakteryzujacych skrzynki z klawiatury */virtual void wstaw();
	/**metoda  sluzaca do wypisywania danych charakteryzujacych skrzynki z klawiatury */virtual void wypisz();
	/**metoda zapisujaca dane o skrzynkach do pliku wprowadzane podczas dzialania programu */virtual  void zapisz(std::ostream& o) const;
};
