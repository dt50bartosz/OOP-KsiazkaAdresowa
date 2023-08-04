#pragma once
#ifndef MENAGERADRESATOW_H
#define MENAGERADRESATOW_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"


using namespace std;

class MenagerAdresatow
{
private:
	Adresat adresat;
	PlikZAdresatami plikZAdresatami;

	int idZalogowanegoUzytkownika;
	int idOstatniegoAdresata;
	vector <Adresat> adresaci;
	Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
	string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
	


public:
	MenagerAdresatow(string NAZWAPLIKUZADRESATMI) : plikZAdresatami(NAZWAPLIKUZADRESATMI) {};

	void wczytajAdresatowZPliku();
	void ustawIdZalogownegoUzytkonika(int noweId);
	int  pobierzIdZalogownegoUzytkonika();
	void wylogowanieUzytkownika();
	void wyswietlWszytkichAdresatow();
	void dodajAdresata();
	
	

};

#endif