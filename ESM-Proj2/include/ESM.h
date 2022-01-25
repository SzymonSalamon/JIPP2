//
// Created by Szymon on 20.01.2022.
//

#ifndef INC_2_ESM_H
#define INC_2_ESM_H
#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
using namespace std;
class Osoba{
private:
    string imie,nazwisko;
public:
    /***
     * Destruktor Klasy Osoba
     */
    ~Osoba();
    /***
     * Setter imienia
     * @param imie - nowa wartosc imie
     */
    void setImie(string imie);
    /***
     * Setter Nazwiska
     * @param nazwisko  - nowa wartosc nazwiskoa
     */
    void setNazwisko(string nazwisko);
    /***
     * getter wartosci Imienia
     * @return zwraca wartosc imienia w string
     */
    string getImie();
    /***
     * getter wartosci Nazwiskoa
     * @return zwraca wartosc nazwiska w string
     */
    string getNazwisko();
    /***
     * Funkcja wypisujaca wartosci wszystkich pól klasy
     */
    void ShowData();
    /***
     * Konstruktor klasy osoba
     * @param imie wartosc jaka zaincjalizowane zostanie imie
     * @param nazwisko wartosc jaka zaincjalizowane zostanie nazwisko
     */
    Osoba(const string &imie, const string &nazwisko);
};
//Dziedziczenie
class Pracownik: public Osoba{
private:
    int kod;
    float wyplata;
    string dzial,stanowisko;
public:
    /***
     * Przeciażenie operatora == dla klasy Pracownik
     * @param p druga klasa z ktora bedziemy porownywac wartosci kod
     * @return zwraca wartosc logiczna true jesli rowne inaczej falsz
     */
    bool operator ==(const Pracownik &p);
    /***
     * Przeciażenie operatora > dla klasy Pracownik
     * @param p druga klasa z ktora bedziemy porownywac
     * @return zwraca wartosc logiczna true jesli wyplata wieksza
     */
    bool operator >(const Pracownik &p);
    /***
     * Destruktor Pracownika
     */
    ~Pracownik();
    /***
     * Pusty konstruktor klasy Pracownik
     */
    Pracownik();
    /***
     * Konstruktor klasy pracownik
     * @param imie wartosc inicjalizacyjna dla imie
     * @param nazwisko wartosc inicjalizacyjna dla nazwisko
     * @param kod wartosc inicjalizacyjna dla kod
     * @param wyplata wartosc inicjalizacyjna dla wyplata
     * @param dzial wartosc inicjalizacyjna dla dzial
     * @param stanowisko wartosc inicjalizacyjna dla stanowisko
     */
    Pracownik(string imie, string nazwisko, int kod, float wyplata, const string &dzial, const string &stanowisko);
    /***
     * Wypisuje wartosci zmiennych klasy Pracownik
     */
    void showData();
    /***
     * setter zmiennej kod
     * @param kod - wartosc kod
     */
    void setKod(int kod);
    /***
     * setter zmiennej wyplata
     * @param wyplata -wartosc wyplata
     */
    void setWyplata(float wyplata);
    /***
     * setter zmiennej dzial
     * @param dzial -wartosc dzialu
     */
    void setDzial(string dzial);
    /***
     * setter zmiennej stanowisko
     * @param stanowisko -wartosc stanowisko
     */
    void setStanowisko(string stanowisko);
    /***
     * getter zmiennej kod
     * @return kod w int
     */
    int getKod();
    /***
     * getter zmiennej wyplata
     * @return zwraca wartosc wyplata w float
     */
    float getWyplata();
    /***
     * getter zmiennej dzial
     * @return zwraca wartosc dzial w string
     */
    string getDzial();
    /***
     * getter zmiennej Stanowisko
     * @return zwraca zmienna Stanowisko w string
     */
    string getStanowisko();
};
class MainMenu{
private:
    //deklaracja kontenera (vectora)
    vector<Pracownik> pracownicy;
    fstream file;
    string linia;
    string imie, nazwisko, dzial, stanowisko;
    int kod;
    float wyplata;
public:
    /***
     * destruktor klasy MainMenu
     */
    ~MainMenu();
    /***
     * Wypisuje menu
     */
   void showMenu();
   /***
    * bezpieczne pobranie wartosci wybor dla int
    * @return wybor wartosc w int
    */
    int Wybierz();
    /***
     * pobranie bazy
     * @param nazwa_pliku wartosc pliku z ktorej pobierana ma byc baza
     */
    void Import(string nazwa_pliku);
    /***
     * wyslanie bazy
     * @param nazwa_pliku wartosc pliku z ktorej exportowana ma byc baza
     */
    void Export(string nazwa_pliku);
    /***
     * Wypisuje zawartosc kontenera
     */
    void ShowRecords();
    /**
     * Edycja jednego rekordu z kontenera
     */
    void EditRecord();
    /***
     * Wyszukanie klasy w kontenerze
     */
    void FindRecord();
    /***
     * Dodanie Rekordu
     */
    void AddRecord();
    /***
     * Usuniecie Rekordu
     */
    void DeleteRecord();
    /***
     * Zliczenie ilosci osob w dziale
     */
    void CountD();
    /***
     * obliczenie kosztow miesiecznych
     */
    void Costs();
    /***
     * Opuszczenie bazy
     */
    void Exit();
    /***
     * Wyszukanie osoby z najwyzsza wyplata
     */
    void FindMax();
};

#endif //INC_2_ESM_H
