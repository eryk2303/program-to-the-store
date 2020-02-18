#include"Kolekcja.h"
#include"Wyjatki.h"
int Kolekcja:: Czy_pusta() {
	if (lista.empty()) return 0;
	else return 1;
}
void  Kolekcja::Dodaj(Produkty& z) {
	try
	{
		lista.push_back(z);
	}
	catch (const bad_alloc& ex)
	{
		cout << "error: " << ex.what() << endl;
	}

};
void Kolekcja::Wypisz() {
	
	typename list<Produkty>::iterator it;
	it = lista.begin();
	for (it; it != lista.end(); it++)
	{
		cout << "\n";
		it->wypisz();
	}
};
void Kolekcja::zapis() {
	try{
	ofstream plik("sklep.txt", ios::app);
	if(!plik.good()) throw plikb("nie mozna zapisac ");
	typename list<Produkty>::iterator it;
	it = lista.begin();
	for (it; it != lista.end(); it++)
	{
		plik << *it;
	}}
	catch(exception& e)
	{
		cout << e.what() << "\n";
		
	}
	
}
