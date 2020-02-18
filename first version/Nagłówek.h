#pragma once
#include <string>
#include<iostream>
#include<fstream>
using namespace std;


/*!
* \Klasa Produktow mozliwiajaca wprowadzanie oraz reprezentacjie danych o nowych produktach 
*/class Produkty 
{
public:
/**Konstuktor domyslny ustawiajacy wartosci pol klasy Produkty*/	Produkty(): waga(0), cena(0), ilosc(0) {}
/**Operator zaprzyjazniony strumienia wyjsca umozliwiajacy prawidlowe wypisanie elementow*/	friend ostream& operator<<(ostream& out, Produkty& z);
/**Operator zaprzyjazniony stumienia wejscia umozliwia wprowadzenie danych z klawiatury w taki sposob aby odpowiednio sie zapisaly*/friend istream& operator>>(istream& in, Produkty& z);


	/**Metoda Nazwa udostepnia publicznie nazwe produktu
	@return -wartosc pola "nazwa"*/string Nazwa();
	/**Metoda Waga udostepnia publicznie wartosc wagi produktu
	@return -wartosc pola "waga"*/int Waga();
	/**Metoda Nazwa udostepnia publicznie cene produktu
	@return -wartosc pola "cena"*/int Cena();
	/**Metoda Nazwa udostepnia publicznie ilosc miejsc produktu
	@return -wartosc pola "ilosc"*/int Ilosc();
	/**Destruktor*/~Produkty() {}
private:
	string nazwa;
	float waga;
	float cena;
	int ilosc;
};


/**Klasa Kolekcja umozliwia reprezentacje oraz wprowadzanie produktow do wspolnej kategorii*/class Kolekcja
{
public:

	/**Metoda dodajaca do danego obieku klasy Kolekcja nowy element "produkt"
	@param -Nowy element klasy Produkty */void DodajNowy(Produkty & Nowy);
	/**Metoda wypisuje wartosci pol z danej kolekcji*/void wypisz();
	/**Konstruktor ustawiajacy wartosci pol klasy Kolekcji*/Kolekcja() : ile_elemntow(0), Produkty_(new Produkty[2]) {}
	/**Metoda Ile_elemntow udostepniajaca publicznie ilosc produktow w danej kolekcji
	@return -ilosc elementow w danej kolekcji*/int Ile_elemntow();
	/**Destruktor usuwajcy tablice Produktow*/~Kolekcja() { delete[] Produkty_; }
	
private:
	Produkty* Produkty_;
	int ile_elemntow;
};

/**Klasa zajmujaca sie sterowaniem calego programu*/class Sterowanie
{
public:
	
	/**Konstruktor ustawiajacy wartosci pol klasy Sterowanie*/Sterowanie():tablica(new Produkty[2]), ile(0){}
	/**Metoda wypisujaca mozliwe opcjie do wyboru w programie przez uzytkownika*/void Menu();
	/**Metoda wczytujaca dane produktow podane przez uzytkownika oraz przyporzadkowuje mu odpowiedni obiekt klasy Kolekcja gdy tablia produtow jest za mala nastepuje relokacja */void Wczytaj();
	/**Metoda wypisujaca informacjie wszystkich produktach*/void Wypisz();
	/**Metoda wysisujaca informacjie o wszystkich narzedziach*/void Wypisz_narzedzia();
	/**Metoda wysisujaca informacjie o wszystkich srubkach*/void Wypisz_srubki();
	/**Metoda wysisujaca informacjie o wszystkich skrzynkach*/void Wypisz_skrzynka();
	/**Metoda znajdujaca po nazwie informacjie o produkcie*/void znajdz();
	/**Metoda zapisujaca wprowadzane dane do pliku*/void Zapis_do_pliku();
	/**Destuktor usuwajacy tablice Produktow*/~Sterowanie() { delete[] tablica; }
private:
	ofstream Plik;
	Produkty* tablica;
	Kolekcja narzedzia;
	Kolekcja skrzynka;
	Kolekcja srubki;
	int ile;
};