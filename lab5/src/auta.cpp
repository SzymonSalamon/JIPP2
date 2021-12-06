//
// Created by Szymon on 08.11.2021.
//

#include "auta.h"

Pojazd::Pojazd(string rejestracja, string marka, string nazwa, int miejsca, string typ) {
    *this->rejestracja = rejestracja;
    *this->marka = marka;
    *this->nazwa = nazwa;
    *this->miejsca = miejsca;
    *this->typ = typ;
}

void Pojazd::Show() {
    cout << marka << nazwa << " o rejestracji:"<<rejestracja << endl << " Posiada:" << miejsca << endl;
}
void Pasazer(int siedz,string dane){

}
Pojazd::Pojazd(Pojazd &pojazd){
    rejestracja = pojazd.rejestracja;
    miejsca = pojazd.miejsca;
    nazwa = pojazd.nazwa;
    marka = pojazd.marka;
    typ = pojazd.typ;
}

void Pojazd::getMarka() {
    cout << marka ;
}
void
