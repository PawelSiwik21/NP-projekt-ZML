#include <iostream>
#include <string>
#include "menurestauracji.hpp"
#define	 LICZBA_DAN 20


using namespace std;

class menu
{
	public:
		int numerDania;
		string nazwaDania;
		double cena;
};

int funkcjamenu() {
	menu danie[LICZBA_DAN];
	danie[0].numerDania = 1;
	danie[0].nazwaDania = "pierogi jakieœ";

}



