//
// Created by Szymon on 08.11.2021.
//

#ifndef JIPP2_AUTA_H
#define JIPP2_AUTA_H

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <cstring>
 using namespace std;

class csvfile{
private:
    fstream plik;
    char linia[255];
    string tablica[255][255];
    char *ptr;
public:
   void  csvopen(nazwa){
       plik.open(nazwa,ios::in);
       if(plik.good()==true {
           cout << "Otwarto plik"<<nedl;
       }
       else {
           cout << "Blad otwarcia pliku ponawiam próbe" << endl;
       }
       csvopen(nazwa);
   }
   void  csvclose(){
       plik.close();
   }

   void  getdata(char znak){

       }
   }
   void  savedata()
   void  add()

}
#endif //JIPP2_AUTA_H
