#include "KsiazkaAdresowa.h"

bool KsiazkaAdresowa::czyUzytkonikJestZalogowany() {
	return menagerAdresatow.pobierzIdZalogownegoUzytkonika() > 0 ? true : false;
	
}


void KsiazkaAdresowa::restracjaUzytkonika() {
	menagerUzytkownikow.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanie() {
	int idZalogowanegoUzytkonika = 0;
		
	idZalogowanegoUzytkonika = menagerUzytkownikow.logowanie();
	menagerAdresatow.ustawIdZalogownegoUzytkonika(idZalogowanegoUzytkonika);
	menagerUzytkownikow.ustawIdZalogownegoUzytkonika(idZalogowanegoUzytkonika);

	menagerAdresatow.wczytajAdresatowZPliku();


}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
	menagerUzytkownikow.ustawIdZalogownegoUzytkonika(0);
    menagerAdresatow.wylogowanieUzytkownika();


}

void KsiazkaAdresowa::wyswietlWszytkichAdresatow() {
	menagerAdresatow.wyswietlWszytkichAdresatow();
	system("pause");
	
}

void KsiazkaAdresowa::dodajAdresata() {
	menagerAdresatow.dodajAdresata();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkonika() {
	menagerUzytkownikow.zmianaHaslaZalogowanegoUzytkownika();
}