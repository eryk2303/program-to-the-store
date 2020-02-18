#pragma once
#include "Produkty.h"

/**Klasa dziedziczaca po klasie produkty umozliwia reprezentowanie danych o srobkach */class Srubki : public virtual Produkty
{
protected:
	float waga;
public:
	/**metoda sluzaca do wprwadzania danych o wadze, metode ta wykorzystuje funkcja wstaw */ void Wstaw_waga();
	/**metoda sluzaca do wypisywania danych o wadze, metode ta wykorzystuje funkcja wypisz */ void Wypisz_waga();
	/**metoda  sluzaca do wprowadzanaia danych charakteryzujacych Srubki z klawiatury */virtual void wstaw();
	/**metoda  sluzaca do wypisywania danych charakteryzujacych Srubki z klawiatury */virtual void wypisz();
	/**metoda zapisujaca dane o srobkach do pliku wprowadzane podczas dzialania programu */virtual  void zapisz(std::ostream& o) const;
};
