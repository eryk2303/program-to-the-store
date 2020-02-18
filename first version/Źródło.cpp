#include "Nag³ówek.h"

int main()
{
	int menu;
	Sterowanie Glowna;
	do {
		Glowna.Menu();
		cin >> menu;
		switch (menu)
		{
		case 1:
			Glowna.Wczytaj();
			break;
		case 2:
			Glowna.Wypisz();
			break;
		case 3:
			Glowna.Wypisz_narzedzia();
			break;
		case 4:
			Glowna.Wypisz_skrzynka();
			break;
		case 5:
			Glowna.Wypisz_srubki();
			break;
		case 6:
			Glowna.znajdz();
			break;
		case 7:
			Glowna.Zapis_do_pliku();
			break;
		}
		
	} while (menu != 0);
	getchar();
	return 0;
}