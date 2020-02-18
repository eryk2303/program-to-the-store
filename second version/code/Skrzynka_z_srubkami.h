#pragma once
#include"Skrzynki.h"
#include"Srubki.h"

/**Klasa dziedziczaca po dwuch klasach nie abstrakcyjnych sluzaca do reprezentacji skrzynek z srobkami */class Skrzynka_z_srubkami : public Skrzynki, public  Srubki
{
public:
	/**metoda  sluzaca do wprowadzanaia danych charakteryzujacych skrzyneki z srobkami z klawiatury */void wstaw();
	/**metoda  sluzaca do wypisywania danych charakteryzujacych skrzyneki z srobkami z klawiatury */void wypisz();
	/**metoda zapisujaca dane o skrzynekach z srobkami do pliku wprowadzane podczas dzialania programu */void zapisz(std::ostream& o) const;
	
};
