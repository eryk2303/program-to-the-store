#include"Skrzynki.h"
#include"Srubki.h"
#include"Kolekcja.h"
#include"Narzedzia.h"
#include"Skrzynka_z_srubkami.h"
#include"Produkty.h"
#include"Wyjatki.h"
int main()
{
	Kolekcja narzedzia;
	Kolekcja srubki;
	Kolekcja skrzynki;
	Kolekcja skrzynka_z_srobkami;
	int a = 0;
	
	while (a =! 0)
	{
		int b = 0;
		cout << "1 - Dodaj produkt \n";
		if (narzedzia.Czy_pusta() == 1)
		{
			cout << "2 - Wypisz narzedzia\n";
			b = 1;
		}
		if (srubki.Czy_pusta() == 1)
		{
			cout << "3 - Wypisz Srubki\n";
			b = 1;
		}
		if (skrzynki.Czy_pusta() == 1)
		{
			cout << "4 - Wypisz skrzynki\n";
			b = 1;
		}
		if (skrzynka_z_srobkami.Czy_pusta() == 1)
		{
			cout << "5 - Wypisz szkszynki z narzedziami\n";
			b = 1;
		}
		if (b == 1)
		{
			cout << "6 - Wypisz wszystko\n";
		}
		if (b == 1)
		{
			cout << "7 - zapis do pliku\n";
		}
		cin >> a;
		switch (a)
		{
		case 1:
		{
			int wybor = 0;
			cout << " 1 - Dodaj Narzedzia \n 2 - Dodaj Srubki \n 3 - Dodaj Skrzynke \n 4 - Dodaj Skrzynke z srobkami \n";
			cin >> wybor;
			switch (wybor)
			{
			case 1:
			{
				Narzedzia tmp;
				tmp.wstaw();
				narzedzia.Dodaj(tmp);
				break;
			}
			case 2:
			{
				Srubki tmp;
				tmp.wstaw();
				srubki.Dodaj(tmp);
				break;
			}
			case 3:
			{
				Skrzynki tmp;
				tmp.wstaw();
				skrzynki.Dodaj(tmp);
				break;
			}
			case 4:
			{
				Skrzynka_z_srubkami tmp;
				tmp.wstaw();
				skrzynka_z_srobkami.Dodaj(tmp);
				break;
			}
			}
			break;
		}
		case 2:
		{
			
			narzedzia.Wypisz();
			break;
		}
		case 3:
		{

			srubki.Wypisz();
			break;
		}
		case 4:
		{

			skrzynki.Wypisz();
			break;
		}
		case 5:
		{

			skrzynka_z_srobkami.Wypisz();
			break;
		}
		case 6:
		{
			narzedzia.Wypisz();
			srubki.Wypisz();
			skrzynki.Wypisz();
			skrzynka_z_srobkami.Wypisz();
			break;
		}
		case 7:
		{
			narzedzia.zapis();
			srubki.zapis();
			skrzynki.zapis();
			skrzynka_z_srobkami.zapis();
			break;
		}
		}
		
	}
	
	return 0;
}
