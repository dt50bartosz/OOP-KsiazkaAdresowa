#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class MetodyPomocnicze
{

public:
	static string konwerjsaIntNaString(int liczba);
	static int konwersjaStringNaInt(string liczba);
	static string wczytajLinie();
	static char menuUzytkownika();
	static char menuZalogowanegoUzytkownika();

};

