//
// Created by Szymon on 11.10.2021.
//

#include <iostream>
#include <string.h>
#include "../include/simplecalc.h"

using namespace std;

int main(int argc, char* argv[]) {
    int a,b;
    for(int i=0;i<argc;i++){
        cout << argv[i]<<endl;
    }
    if(argc>3){
        cout << "Podano wiecej parametrow niz dopuszcza program zostana uzyte tylko pierwsze 3 parametry !!!"<<endl;
    }
    if(argc>=3){
        a = stoi(argv[2]);
        b = stoi(argv[3]);
        cout <<  a << endl << b;
    }

    if(argc >=1){
        if(strcmp(argv[1],"add")==0){
            cout << "Wynik dodawania wyniosl:"<<dodawanie(a,b)<<endl;
        }
        if(strcmp(argv[1],"subtract")==0){
            cout << "wynik odejmowania wyniosl:"<<odejmowanie(a,b)<<endl;
        }
        if(strcmp(argv[1],"volume")==0){
            cout <<"Objetosc figury o podstawie wyniosla:"<<objetosc(a,b)<<endl;
        }
        if(strcmp(argv[1],"help")==0){
        cout << "Składnia: [Polecenie] [Parametr1] [Parametr2]"<<endl;
        cout << "Możliwe polecenia:\n1.add - dodawanie 2 skladnikow\n2.subtract - odejmowanie 2 skladnikow"<<endl;
        cout <<"3.Volume- objetosc granistoslupa o polu trapezu x i wyoskosci h\n4.help - wyswietla pomoc"<<endl;
       }
    }
    else
        cout << "Nie podano zadnej funkcji"<< endl;
    return 0;
}