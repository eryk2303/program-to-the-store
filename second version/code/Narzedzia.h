#pragma once
#include "Produkty.h"
/**Klasa pochodna klasy produkty reprezentuje dane o narzedziach */class Narzedzia : public Produkty
{

public:
	
	/**metoda  sluzaca do wprowadzanaia danych charakteryzujacych narzedzia z klawiatury */void wstaw();
	/**metoda  sluzaca do wypisywania danych charakteryzujacych narzedzia z klawiatury */void wypisz();
	/**metoda zapisujaca dane o narzedziach do pliku wprowadzane podczas dzialania programu */ void zapisz(std::ostream& o) const;
};