#pragma once
#ifndef MENAGERUZYTKOWNIKOW_H


#include <iostream>
#include <vector>
#include <Windows.h>


#include "PlikZUzytkownikami.h"

using namespace std;



class MenagerUzytkownikow
{
private:
	Uzytkownik uzytkownik;
	
	
	PlikZUzytkownikami plikZUzytkownikami;
	vector <Uzytkownik> uzytkownicy;
	int idZalogowanegoUzytkownika;


	bool czyIstniejeLogin(string login);
	void wypiszWszytkichUzytkownikow();
	int pobierzIdNowegoUzytkownika();
	Uzytkownik podajDaneNowegoUzytkownika();


public:
	MenagerUzytkownikow(string NAZWAPLIKUZUZTYKOWNIKAMI) : plikZUzytkownikami(NAZWAPLIKUZUZTYKOWNIKAMI) {} ;


	void ustawIdZalogownegoUzytkonika(int noweId);
	int  pobierzIdZalogownegoUzytkonika();
	void wczytaUzytkownikowZPliku();
	void rejestracjaUzytkownika();
	void wyswietlsUzytkownika();
	int logowanie();
	void zmianaHaslaZalogowanegoUzytkownika();

	
};
 



#endif 