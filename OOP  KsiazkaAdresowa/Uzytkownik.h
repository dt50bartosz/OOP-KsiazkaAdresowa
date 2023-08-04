
#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

 // !UZYTKOWNIK_H



#include <iostream>

using namespace std;

class Uzytkownik
{
private:
    int id = 0;
    string login;
    string haslo;


public:
    void ustawId(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);
    const string nazwaPlikuZUzytkownikami;

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
    

};
#endif