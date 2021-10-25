//
// Created by Szymon on 25.10.2021.
//

#include "../include/FirstClass.h"

/*FirstClass::FirstClass(string productName, unsigned int price, unsigned int weight, unsigned int amount):
        price(price), weight(weight), amount(amount){
    this->productName = productName;
}

void FirstClass::showBasicData() {
    cout << productName << " " << price << " gr" << endl;
}

void FirstClass::showDetails() {
    cout << weight << " kg, " << amount << " pcs." <<endl;
}

void FirstClass::showAllData() {
    showBasicData();
    showDetails();
}

void FirstClass::setPrice(unsigned int price) {
    this->price = price;
}

unsigned int FirstClass::getPrice() {
    return price;
}*/
Prostopadloscian::Prostopadloscian(int a,int b,int h):
        a(a), b(b), h(h){
    this->a = a;
}
int Prostopadloscian::OBJ(){
            return a*b*h;
        }


        Kula::Kula(float r):
        r(r){
    this->r =r;
}
float Kula::OBJ(){
    return 2/3*3,14*r;
}
Student::Student(string imie, string nazwisko,int album,int pytania,int poprawne):
    imie(imie), nazwisko(nazwisko),album(album),pytania(pytania),poprawne(poprawne){
    this->imie =imie;
}

    float Student::procent() {
    float wynik = float(poprawne)/float(pytania);
        return wynik * 100;
    }

