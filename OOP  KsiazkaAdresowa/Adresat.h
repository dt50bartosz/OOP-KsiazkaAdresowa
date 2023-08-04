#pragma once
#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
private:
    int  id;
    int  idUzytkownika;
    string imie; 
    string nazwisko;
    string numerTelefonu; 
    string email; 
    string adres;

public:
    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweId);
    void ustawImie(string noweImie);
    void ustawNazwisko(string nowenazwisko);
    void ustawNumerTelefonu(string nowynumer);
    void ustawEmail(string nowyEmail);
    void ustawAdras(string nowyAdres);
        
    int  pobierzId();    
    int  pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
 


};

#endif // !1