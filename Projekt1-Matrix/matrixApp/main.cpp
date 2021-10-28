//
// Created by Szymon on 24.10.2021.
//

#include <iostream>
#include <string.h>
#include "madlib.h"
using namespace std;
void help(){
 cout << "Fukncje dostepne w programie:"<<endl;
 cout << "1.addMatrix: Dodawanie dwóch macierzy"<< endl;
 cout << "2.subtractMatrix: Odejmowanie dwóch macierzy"<< endl;
 cout << "3.multiplyMatrix: Mnozenie dwóch macierzy"<< endl;
 cout << "4.multiplyByScalar: Mnozenie macierzy przez skalar"<< endl;
 cout << "5.transpozeMatrix: Transponowanie macierzy"<< endl;
 cout << "6.powerMatrix: Podnoszenie do potegi macierzy"<< endl;
 cout << "7.determinantMatrix: Wyznacznik macierzy"<< endl;
 cout << "8.matrixIsDiagonal: Sprawdzenie czy macierz jest diagonalna"<< endl;
 cout << "9.sortRowsInMatrix: Sortowanie wierszy w macierzy"<< endl;
}
int main(int argc ,char* argv[]) {
    cout << argc << endl;
    if (argc != 2) {
        help();
        exit(1);
    } else {
        char wybor;
        int x,y;
        cout << "Podaj jakiego typu maja byc macierze(i - int,d - double)"<<endl;
        cin >> wybor;
        cout << "Podaj wymiary macierzy(oddzielone spacja)"<<endl;
        cin >> x;
        cin >> y;
        if (strcmp(argv[1], "addMatrix") == 0){
            if(wybor=='i')
                showMatrix(addMatrix(makeMatrix(x,y),makeMatrix(x,y),x,y),x,y);
            if(wybor=='d')
                showMatrix(addMatrix(makeMatrixDouble(x,y),makeMatrixDouble(x,y),x,y),x,y);
            exit(1);
        }
        if (strcmp(argv[1], "subtractMatrix") == 0){
            if(wybor=='i'){
                int **tab1 = makeMatrix(x,y);
                int **tab2 = makeMatrix(x,y);
                showMatrix(subtractMatrix(tab1,tab2,x,y),x,y);}
            if(wybor=='d'){
                double **tab1 = makeMatrixDouble(x,y);
                double **tab2 = makeMatrixDouble(x,y);
                showMatrix(subtractMatrix(tab1,tab2,x,y),x,y);}
            exit(1);
        }
        if (strcmp(argv[1], "multiplyMatrix") == 0){
            int z;
            cout << "Podaj ilosc kolumn drugiej macierzy"<<endl;
            cin >> z;
            if(wybor=='i'){
                int **tab1 = makeMatrix(x,y);
                int **tab2 = makeMatrix(x,y);
                showMatrix(multiplyMatrix(tab1,tab2,x,y,z),x,z);}
            if(wybor=='d'){
                double **tab1 = makeMatrixDouble(x,y);
                double **tab2 = makeMatrixDouble(x,y);
                showMatrix(multiplyMatrix(tab1,tab2,x,y,z),x,z);}
            exit(1);
        }
        if (strcmp(argv[1], "multiplyByScalar") == 0){
            if(wybor=='i'){
                int **tab1 = makeMatrix(x,y);
                cout <<"Podaj skalar"<<endl;
                int s;
                showMatrix(multiplyByScalar(tab1,x,y,s),x,y);
            }
            if(wybor=='d'){
                double **tab1 = makeMatrixDouble(x,y);
                cout <<"Podaj skalar"<<endl;
                double s;
                showMatrix(multiplyByScalar(tab1,x,y,s),x,y);
            }
            exit(1);
        }
        if (strcmp(argv[1], "transpozeMatrix") == 0){
            if(wybor=='i'){
                int **tab1 = makeMatrix(x,y);
                showMatrix(transpozeMatrix(tab1,x,y),x,y);}
            if(wybor=='d'){
                double **tab1 = makeMatrixDouble(x,y);
                showMatrix(transpozeMatrix(tab1,x,y),x,y);}
            exit(1);
        }
        if (strcmp(argv[1], "powerMatrix") == 0){
            cout << "Podaj Potege:"<<endl;
            int z;
            cin >> z;
            if(wybor=='i'){
                int **tab1 = makeMatrix(x,y);
                showMatrix(powerMatrix(tab1,x,y,z),x,y);}
            if(wybor=='d'){
                double **tab1 = makeMatrixDouble(x,y);
                showMatrix(powerMatrix(tab1,x,y,z),x,y);}
            exit(1);
        }
        if (strcmp(argv[1], "matrixIsDiagonal") == 0){
            bool diag;
            if(wybor=='i'){
                int **tab1 = makeMatrix(x,y);
                diag = matrixIsDiagonal(tab1,x,y);}
            if(wybor=='d'){
                double **tab1 = makeMatrixDouble(x,y);
                diag = matrixIsDiagonal(tab1,x,y);}
            if(diag == true)
                cout << "Macierz jest diagonalna"<<endl;
            if(diag == false)
                cout << "Macierz nie jest diagonalna"<<endl;
            exit(1);
        }
        if (strcmp(argv[1], "sortRowsInMatrix") == 0){
            if(wybor=='i'){
                int **tab1 = makeMatrix(x,y);
                sortRowsInMatrix(tab1,x,y);
                showMatrix(tab1,x,y);}
            if(wybor=='d'){
                double **tab1 = makeMatrixDouble(x,y);
                sortRowsInMatrix(tab1,x,y);
                showMatrix(tab1,x,y);}
            exit(1);
        }
        if (strcmp(argv[1], "determinantMatrix") == 0) {
            if (wybor == 'i') {
                int **tab1 = makeMatrix(x, y);
                cout << "Wyznacznik macierzy wynosi:"<< determinantMatrix(tab1,x);
            }
                if (wybor == 'd') {
                    double **tab1 = makeMatrixDouble(x, y);
                    cout << "Wyznacznik macierzy wynosi:"<< determinantMatrix(tab1,x);
                }
                exit (1);
        }
        if (strcmp(argv[1], "help") == 0) {
            help();
            exit(1);
        }
        else {
            cout << "Nie rozpoznano polecenia" << endl;
            help();
        }
        exit(20);
    }
}