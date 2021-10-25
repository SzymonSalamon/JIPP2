//
// Created by Szymon on 25.10.2021.
//

#ifndef INC_2_FIRSTCLASS_H
#define INC_2_FIRSTCLASS_H
#include <iostream>

using namespace std;
/*
class FirstClass {
private:
    string productName;
    unsigned int price = 0;
    unsigned int weight = 0;
    unsigned int amount = 0;

    void showDetails();

public:
    FirstClass(string productName, unsigned int price, unsigned int weight, unsigned int amount);
    void showBasicData();

    void showAllData();

    void setPrice(unsigned int price);

    unsigned int getPrice();

};*/
class Prostopadloscian {
private:
    int h=0;
    int a=0;
    int b=0;
public:
    Prostopadloscian(int a,int b,int h);
    int OBJ();

};
class Kula{
private:
    float r;
public:
    Kula(float r);
    float OBJ();
};

class Student{
private:
    string imie;
    string nazwisko;
    int album;
    int pytania;
    int poprawne;

public:
    Student(string imie, string nazwisko,int album,int pytania,int poprawne);
    float procent();
};
#endif //INC_2_FIRSTCLASS_H

