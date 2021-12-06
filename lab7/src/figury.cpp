//
// Created by Szymon on 22.11.2021.
//

#include <figury.h>

using namespace std;
figura::figura(string nazwa, string kolor){};
prostokat::prostokat(string nazwa,string kolor,int szerokosc,int wysokosc){};
trojkat::trojkat(string nazwa,string kolor,int wysokosc,int ramie){};
kolo::kolo(string kolor,string nazwa,int promien){};

float prostokat::Obwod() {
    float wynik = szerokosc + wysokosc;
    return 2*wynik;
}
float prostokat::Pole(){
    return szerokosc * wysokosc;
}
float trojkat::Obwod() {
    return ramie*3;
}
float trojkat::Pole(){
    return wysokosc*ramie;
}
float kolo::Obwod() {
    return promien*2*3,14;
}
float kolo::Pole() {
    return promien*promien*3,14;
}
