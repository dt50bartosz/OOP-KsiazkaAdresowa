#include "MetodyPomocnicze.h"


char MetodyPomocnicze::menuUzytkownika() {
    system("cls");
    char wybor;
    cout << "1.Logowanie " << endl;
    cout << "2.Dodaj Uzytkonika " << endl;
    cout << "3.Wyjscie" << endl;
    cout << "Wybor: "; cin >> wybor;

    return wybor;
} 
 char MetodyPomocnicze::menuZalogowanegoUzytkownika() {
    system("cls");
    char wybor;
    cout << "1.Dodaj Adresata " << endl;
    cout << "2.Wyswietl Wszytkich Adresatow " << endl;
    cout << "3.Zmien Haslo" << endl;
    cout << "4.Wyloguj" << endl;
    cout << "Twoj Wybor: "; cin >> wybor;
    return wybor;

 }

string MetodyPomocnicze::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba)
{
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;

    return liczbaInt;
}

string MetodyPomocnicze::konwerjsaIntNaString(int liczba)
{
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}