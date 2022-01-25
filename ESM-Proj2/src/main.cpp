//
// Created by Szymon on 20.01.2022.
//
#include "ESM.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<fstream>
#include<cstdio>
#include <sys/unistd.h>

using namespace std;
int main(int argc, char *argv[]) {
    string nazwa_bazy;
    if (argc != 2)
        cout << "Bledne wywolanie programu!!! uzywam wartosci domyslnych" << endl;
    else {
        nazwa_bazy = argv[1];
        cout << nazwa_bazy << endl;
    }
    MainMenu Menu;
    int wybor;
    Menu.Import(nazwa_bazy);
    while (1) {
        sleep(2);
        Menu.showMenu();
        wybor = Menu.Wybierz();
        if (wybor == 1) {
            Menu.ShowRecords();
            sleep(2);
        }
        if (wybor == 2) {
            Menu.EditRecord();
        }
        if (wybor == 3) {
            Menu.FindRecord();
        }
        if (wybor == 4) {
            Menu.AddRecord();
        }
        if (wybor == 5) {
            Menu.DeleteRecord();
        }
        if (wybor == 6) {
            Menu.CountD();
        }
        if (wybor == 7) {
            Menu.Costs();
        }
        if(wybor == 8){
            Menu.FindMax();
        }
        if (wybor == 9) {
            Menu.Export(nazwa_bazy);
        }
        if (wybor == 0) {
            Menu.Exit();
            break;
        }
        if (wybor < 0 || wybor > 9) {
            cout << "Nie ma takiej Opcji !!!" << endl;
        }
    }
        cout << "Program Zakonczył Działanie poprawnie" << endl;
        exit(0);
    }
