#pragma once
#include <exception>
#include<iostream>

using namespace std;
/**Klasa wyjatkow dziedziczaca po klasie exception */class exc_argument : public exception
{
	double arg;
public:
	exc_argument(double arg = 0) : arg(arg) {}
	/**metoda uruchamiajaca sie po wrowadzeniu blednej wartosci */virtual const char* what() const noexcept {
		cout << "error: arg=" << arg << endl; return "Ujemny argument!";
	}
};
/**Klasa wyjatkow dziedziczaca po klasie exception dla plikow */class plikb : public exception
{
string komunikat;
public:
plikb(string tmp)
{
	komunikat = tmp;
}
/**metoda uruchamiajaca sie gdy plik jest bledy*/const char* what(void) const noexcept override
{
return komunikat.c_str() ;
}};
