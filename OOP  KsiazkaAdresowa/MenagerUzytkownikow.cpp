#include "MenagerUzytkownikow.h"



void MenagerUzytkownikow::zmianaHaslaZalogowanegoUzytkownika(){
   
    string noweHaslo = "";
    cout << "Podaj nowe haslo: "; cin >> noweHaslo;

    for (int i = 0; i < uzytkownicy.size(); i++) {
        if (uzytkownicy[i].pobierzId() == idZalogowanegoUzytkownika) {
            uzytkownicy[i].ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }

    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

void MenagerUzytkownikow::wczytaUzytkownikowZPliku() {
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

void MenagerUzytkownikow::wypiszWszytkichUzytkownikow() {
    for (int i = 0; i < uzytkownicy.size(); i++)
    {
        cout << "Login: " << uzytkownicy[i].pobierzLogin() << endl;
    }
}

int MenagerUzytkownikow::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool MenagerUzytkownikow::czyIstniejeLogin(string login)
{
    for (int i = 0; i < uzytkownicy.size(); i++) {
        if (uzytkownicy[i].pobierzLogin() == login) {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;

}

void MenagerUzytkownikow:: rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();
    

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause"); 
    
}

Uzytkownik MenagerUzytkownikow::podajDaneNowegoUzytkownika()
{
    string haslo = "", login = "";
    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    do
    {
        cout << "Podaj login: "; cin >> login;
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: "; cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}


void MenagerUzytkownikow::ustawIdZalogownegoUzytkonika(int noweId) {
    idZalogowanegoUzytkownika = noweId;
}

int  MenagerUzytkownikow::pobierzIdZalogownegoUzytkonika() {
    return idZalogowanegoUzytkownika;
}


int MenagerUzytkownikow::logowanie(){
    
    
        Uzytkownik uzytkownik;
        string login = "", haslo = "";

        cout << endl << "Podaj login: "; cin >> login;

        for (int i = 0; i < uzytkownicy.size(); i++) {
            if (uzytkownicy[i].pobierzLogin() == login) {
                {
                    for (int iloscProb = 3; iloscProb > 0; iloscProb--)
                    {
                        cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                        cin >> haslo;

                        if (uzytkownicy[i].pobierzHaslo() == haslo)
                        {
                            cout << endl << "Zalogowales sie." << endl << endl;
                            system("pause");
                            return uzytkownicy[i].pobierzId();
                        }
                    }
                    cout << "Wprowadzono 3 razy bledne haslo." << endl;
                    system("pause");
                    return 0;
                }

            }      

            
        }
        cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
        system("pause");
        return 0;
    
}
