#pragma once
#ifndef PLIKZUZYTKOWNIKA_H
#define PLIKZUZYTKOWNIKA_H


#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>


#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami
{
private:
	Uzytkownik uzytkownik;

	Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
	string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
	const string nazwaPlikuZUzytkownikami;
	bool czyPlikJestPusty(fstream& plikTekstowy);
	

public:
	PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI) {};

	void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
	void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik>& uzytkownicy);

	vector <Uzytkownik> wczytajUzytkownikowZPliku();
	
	 



};

#endif