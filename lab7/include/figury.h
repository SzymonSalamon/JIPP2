//
// Created by Szymon on 22.11.2021.
//
#include<string>
#ifndef INC_2_FIGURY_H
#define INC_2_FIGURY_H

using namespace std;

class figura{
protected:
    string nazwa;
    string kolor;
public:
    void showFiguraData();
    figura();
    figura(string nazwa,string kolor);
    virtual double getArea() = 0;
};
class prostokat : public figura{
private:
    int szerokosc;
int wysokosc;
public:
    void showProstokatData();
    float Pole();
    float Obwod();
    prostokat();
    prostokat(string nazwa,string kolor,int szerokosc,int wysokosc);
};
class trojkat : public figura{
private:
    int wysokosc;
    int ramie;
public:
    void showTrojkatData();
    float Pole();
    float Obwod();
    trojkat();
    trojkat(string nazwa,string kolor,int wysokosc,int ramie);
};
class kolo : public figura{
private:
    int promien;
public:
    void showKoloData();
    float Pole();
    float Obwod();
    kolo();
    kolo(string kolor,string nazwa,int promien);
};

#endif //INC_2_FIGURY_H
