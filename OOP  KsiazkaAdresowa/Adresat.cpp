#include "Adresat.h"

void Adresat::ustawId(int noweId) {
    id = noweId;
}
void Adresat::ustawIdUzytkownika(int noweId) {
    idUzytkownika = noweId;
}
void Adresat::ustawImie(string noweImie) {
    imie = noweImie;
}
void Adresat::ustawNazwisko(string nowenazwisko) {
    nazwisko = nowenazwisko;
}
void Adresat::ustawNumerTelefonu(string nowynumer) {
    numerTelefonu = nowynumer;
}
void Adresat::ustawEmail(string nowyEmail) {
    email = nowyEmail;
}
void Adresat::ustawAdras(string nowyAdres) {
    adres = nowyAdres;
}


int Adresat::pobierzId() {
    return id;
}
int Adresat::pobierzIdUzytkownika() {
    return idUzytkownika;
}
string Adresat::pobierzImie() {
    return imie;
}
string Adresat::pobierzNazwisko() {
    return nazwisko;
}
string Adresat::pobierzNumerTelefonu() {
    return numerTelefonu;
}
string Adresat::pobierzEmail() {
    return email;
}
string Adresat::pobierzAdres() {
    return adres;
}