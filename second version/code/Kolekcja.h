
#include"Produkty.h"
 /**Klasa Kolekcja umozliwia reprezentacje oraz wprowadzanie produktow do wspolnej kategorii */class Kolekcja
{
private:
	list<Produkty> lista;
public:
	/**metoda sprawdzajaca czy lisa jest pusta
	@return - 0 gdy pusta 1 gdy cos jest w liscie*/int Czy_pusta();
	/**metoda dodajaca nowy element do danej kolekcji 
	@param -Nowy element klasy Produkty */void Dodaj(Produkty& z);
	/**metoda wypisujaca dane poszczegulnych kolekcji */void Wypisz();
	/**metoda sluzaca do zapisu do pliku danych z listy produktow */void zapis();
};

