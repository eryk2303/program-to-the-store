#include "Nag³ówek.h"

void Sterowanie::Menu()
{
	
	cout << "Dodaj elemnt - 1\n";

	if (ile > 0)
		cout << "Wypisz wszystkie Produkty - 2\n";

	if(narzedzia.Ile_elemntow() != 0)
		cout << "Wypisz narzedziay - 3\n";

	if (skrzynka.Ile_elemntow() != 0)
		cout << "Wypisz skrzynki - 4\n";

	if (srubki.Ile_elemntow() != 0)
		cout << "Wypisz srubki - 5\n";

	if (ile > 0)
	{
		cout << "Znajdz cene produktu - 6\n";
		cout << "zapis do pliku - 7\n";
	}
	cout << "Koniec - 0 \n";
}
void Sterowanie::Wczytaj()
{
	if (2  > ile)
	{
		cin >> tablica[ile];
		
	}
	else
	{
		Produkty* tmp = new Produkty[ile + 1];

		for (int i = 0; i < ile; i++)
			tmp[i] = tablica[i];

		delete[] tablica;
		tablica = tmp;
		cin >> tablica[ile];
		
	}
	for(int i = 0; i< ile; i++)
		if (tablica[i].Nazwa() == tablica[ile].Nazwa())
		{
			cout << "Taki produkt juz istnieje dodaj nowy \n";
			cin >> tablica[ile];
		}
	if (tablica[ile].Waga() == 0 && tablica[ile].Ilosc() == 0)
	{
		narzedzia.DodajNowy(tablica[ile]);
	}
	if (tablica[ile].Ilosc() != 0)
	{
		skrzynka.DodajNowy(tablica[ile]);
	}
	if (tablica[ile].Waga() != 0)
	{
		srubki.DodajNowy(tablica[ile]);
	}
	++ile;
}
void Sterowanie::Wypisz()
{
	for (int i = 0; i < ile; i++)
	{
		cout << "\nProdukty " << i + 1 << "\n";
		cout << tablica[i];
	}
}
void Sterowanie::Wypisz_narzedzia()
{
	narzedzia.wypisz();
}
void Sterowanie::Wypisz_srubki()
{
	srubki.wypisz();
}
void Sterowanie::Wypisz_skrzynka()
{
	skrzynka.wypisz();
}
void Sterowanie::znajdz()
{
	string tmp;
	cout << "Podaj nazwe rzeczy ktorej chcesz znac cene \n";
	cin >> tmp;
	for (int i = 0; i < ile; i++)
	{
		if (tablica[i].Nazwa() == tmp)
		{
			cout << tablica[i];
		}
	}
}
void Sterowanie::Zapis_do_pliku()
{
	
	Plik.open("plik.txt", ios::out);
	if (Plik.good() == true)
	{
		for (int i = 0; i < ile; i++)
		{
			if (tablica[i].Waga() == 0 && tablica[i].Ilosc() == 0)
				Plik << "Nazwa " << tablica[i].Nazwa() << "\n" << "cena " << tablica[i].Cena() << " zl \n";
			if (tablica[i].Waga() == 0 && tablica[i].Ilosc() != 0)
				Plik << "Nazwa " << tablica[i].Nazwa() << "\n" << "cena " << tablica[i].Cena() << "\n" << "Liczba miejsc na narzedzia w skrzynce " << tablica[i].Ilosc() << "\n";
			if (tablica[i].Waga() != 0 && tablica[i].Ilosc() == 0)
				Plik << "Nazwa " << tablica[i].Nazwa() << "\n" << "cena " << tablica[i].Cena() << "\n" << "waga " << tablica[i].Waga() << " kg \n";
		}
		Plik.close();
	}
}
