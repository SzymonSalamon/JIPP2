//
// Created by Szymon on 08.11.2021.
//

#ifndef JIPP2_AUTA_H
#define JIPP2_AUTA_H

#include <iostream>
#include <string.h>

 using namespace std;

class Pojazd{
private:
    string *rejestracja;
    string *nazwa;
    int *miejsca;
    string *marka;
    string *typ;
    //string *dane = new string[miejsca] ;
public:
    Pojazd(string rejestracja,string marka,string nazwa,int miejsca,string typ);
    void Show();
    void Pasazer(int siedz,string dane);
    Pojazd(Pojazd& pojazd);
    void getRejestracja();
    void setRejestracja(string rejestracja);
    void getMarka();
    void setMarka(string marka);
    void getNazwa();
    void setNazwa(string nazwa);
};
#endif //JIPP2_AUTA_H
