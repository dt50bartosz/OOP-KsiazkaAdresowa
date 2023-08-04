#include "MenagerAdresatow.h"


void MenagerAdresatow::wyswietlWszytkichAdresatow() {

    for (int i = 0; i < adresaci.size(); i++) {

        cout << endl << "Id:                 " << adresaci[i].pobierzId() << endl;
        cout << "Imie:               " << adresaci[i].pobierzImie() << endl;
        cout << "Nazwisko:           " << adresaci[i].pobierzNazwisko() << endl;
        cout << "Numer telefonu:     " << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << "Email:              " << adresaci[i].pobierzEmail() << endl;
        cout << "Adres:              " << adresaci[i].pobierzAdres() << endl;
    }
    
    if (adresaci.size() == 0) {
        cout << "Brak Kontaktow";
    }
}

void  MenagerAdresatow::wylogowanieUzytkownika() {
    adresaci.clear();
    idZalogowanegoUzytkownika = 0;
}

string MenagerAdresatow::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;

}

Adresat MenagerAdresatow::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cin.ignore();

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    adresat.ustawImie(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));
    
    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    adresat.ustawNazwisko( zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdras(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

void MenagerAdresatow::dodajAdresata()
{
    

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);
  

     ++idOstatniegoAdresata;
}

void MenagerAdresatow::ustawIdZalogownegoUzytkonika(int noweId) {
    idZalogowanegoUzytkownika = noweId;
}

int  MenagerAdresatow::pobierzIdZalogownegoUzytkonika() {
    return idZalogowanegoUzytkownika;
}

void MenagerAdresatow::wczytajAdresatowZPliku() {
   
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
   

   

   
}
