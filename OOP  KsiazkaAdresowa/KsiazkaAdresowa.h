#pragma once
#ifndef KSIAZKAZADRESAMI_H



#include "MenagerUzytkownikow.h"
#include "MenagerAdresatow.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
private:

	MenagerUzytkownikow menagerUzytkownikow;
	MenagerAdresatow menagerAdresatow;
   

public:
	KsiazkaAdresowa(string NAZWAPLIKUZUZTYKOWNIKAMI,string NAZWAPLIKUZADRESATMI) : menagerUzytkownikow(NAZWAPLIKUZUZTYKOWNIKAMI), menagerAdresatow(NAZWAPLIKUZADRESATMI) {
		menagerUzytkownikow.wczytaUzytkownikowZPliku();
	};

	void logowanie();
	void wylogowanieUzytkownika();

	void restracjaUzytkonika();
	void wyswietlWszytkichAdresatow();
	void dodajAdresata();
	void zmianaHaslaZalogowanegoUzytkonika();
	bool czyUzytkonikJestZalogowany();
	

};
#endif // !1