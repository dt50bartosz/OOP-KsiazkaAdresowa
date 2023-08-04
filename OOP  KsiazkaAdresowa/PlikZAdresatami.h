#pragma
#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <vector>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;


class PlikZAdresatami {

private:

	const string nazwaPlikuZAdresatami; 

	string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
	int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	bool czyPlikJestPusty(fstream& plikTekstowy);
	Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
	string pobierzLiczbe(string tekst, int pozycjaZnaku);
	int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
	int pobierzIdOstaniegoAdresata(string tekst);

public:
	void dopiszAdresataDoPliku(Adresat adresat);
	int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector <Adresat>& adresaci, int idZalogowanegoUzytkownika);
	
	PlikZAdresatami(string NAZWAPLIKUZADRESATMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATMI){};
};
















#endif // !1
