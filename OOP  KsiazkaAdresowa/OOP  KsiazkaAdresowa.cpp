#include <iostream>

#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"

using namespace std;

int main()
{
	bool zamkijProgram = false;
	char wybor;

	KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");


	while (!zamkijProgram) {
				
		if (!ksiazkaAdresowa.czyUzytkonikJestZalogowany()) {
			wybor = MetodyPomocnicze::menuUzytkownika();

			switch (wybor) {
			case '1':
			    ksiazkaAdresowa.logowanie();
				break;
			case '2':
				ksiazkaAdresowa.restracjaUzytkonika();
				break;
			case '3':
				zamkijProgram = true;
				break;
			default:
				cout << "Niepoprawny wybor" << endl;

			}
		}
		else {
			wybor = MetodyPomocnicze::menuZalogowanegoUzytkownika();

			switch (wybor) {
			case '1':
				ksiazkaAdresowa.dodajAdresata();
				break;
			case '2':
				ksiazkaAdresowa.wyswietlWszytkichAdresatow();
				break;
			case '3':
				ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkonika();
				break;
			case '4':
				ksiazkaAdresowa.wylogowanieUzytkownika();
				break;
			default:
				cout << "Niepoprawny wybor" << endl;
				

			}
		}
	


	}
	


}
