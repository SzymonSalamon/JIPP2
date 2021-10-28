//
// Created by Szymon on 19.10.2021.
//

#include <iostream>
using namespace std;
/*
 * Funkcja wyswietla macierz
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablica (x-ilosc wierszow , y - ilosc kolumn)
 */
void showMatrix(int** tab,int x, int y);


/*
 * Funkcja wyswietla macierz
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablica (x-ilosc wierszow , y - ilosc kolumn)
 */
void showMatrix(double** tab,int x, int y);

/*
 * Funkcja tworzy macierz typu int o zadanych wymiarach
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablica (x-ilosc wierszow , y - ilosc kolumn)
 *  pusta: wartosc logiczna czy tworzona tablica ma poprosic o wpisanie do niej wartosci
 */
int** makeMatrix(int x,int y,bool pusta=false);

/*
 * Funkcja tworzy macierz typu double o zadanych wymiarach
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablica (x-ilosc wierszow , y - ilosc kolumn)
 *  pusta: wartosc logiczna czy tworzona tablica ma poprosic o wpisanie do niej wartosci
 */
double** makeMatrixDouble(int x,int y,bool pusta=false);

/*
 * Funkcja dodaje macierze typu int i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1,tab2: wskazniki do tablic dwuwymiarowych przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 */
int** addMatrix(int **tab1 ,int **tab2 ,int x,int y);

/*
 * Funkcja dodaje macierze typu double i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1,tab2: wskazniki do tablic dwuwymiarowych przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 */
double** addMatrix(double **tab1 ,double **tab2 ,int x,int y);

/*
 * Funkcja odejmuje macierze typu int i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1,tab2: wskazniki do tablic dwuwymiarowych przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 */
int** subtractMatrix(int **tab1 ,int **tab2 ,int x,int y);

/*
 * Funkcja odejmuje macierze typu double i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1,tab2: wskazniki do tablic dwuwymiarowych przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 */
double** subtractMatrix(double **tab1 ,double **tab2 ,int x,int y);

/*
 * Funkcja mnozy macierze typu int i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1,tab2: wskazniki do tablic dwuwymiarowych przechowujacej macierz
 *  x,y,z: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn 1-wszej macierzy , z-ilosc kolumn 2-macierzy)
 */
int** multiplyMatrix(int **tab1 ,int **tab2 ,int x,int y,int z);

/*
 * Funkcja mnozy macierze typu double i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1,tab2: wskazniki do tablic dwuwymiarowych przechowujacej macierz
 *  x,y,z: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn 1-wszej macierzy , z-ilosc kolumn 2-macierzy)
 */
double** multiplyMatrix(double **tab1 ,double **tab2 ,int x,int y,int z);

/*
 * Funkcja mnozy macierz typu int przez skalar i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1 wskaznik do tablicy dwuwymiarowrj przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 *  z: skalar
 */
int** multiplyByScalar(int **tab1,int x,int y,int s);

/*
 * Funkcja mnozy macierz typu double przez skalar i zwraca wskaznik do macierzy
 *  Opis argumentow:
 *  tab1 wskaznik do tablicy dwuwymiarowrj przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn )
 *  z: skalar
 */
double** multiplyByScalar(double **tab1,int x,int y,double s);

/*
 * Funkcja transponuje macierz int i zwraca wskanik do niej
 *  Opis argumentow:
 *  tab1: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn )
 */
int** transpozeMatrix(int **tab1,int x,int y);

/*
 * Funkcja transponuje macierz double i zwraca wskanik do niej
 *  Opis argumentow:
 *  tab1: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn )
 */
double** transpozeMatrix(double **tab1,int x,int y);

/*
 * Funkcja poteguje macierz int i zwraca wskanik do niej
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 *  p: potega
 */
int** powerMatrix(int **tab,int x,int y, int p);

/*
 * Funkcja poteguje macierz double i zwraca wskanik do niej
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 *  p: potega
 */
double** powerMatrix(double **tab,int x,int y, int p);

/*
 * Funkcja sprawdza czy macierz jest diagonalan zwraca wartosc logiczna
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 */
bool matrixIsDiagonal(int **tab,int x,int y);

/*
 * Funkcja sprawdza czy macierz jest diagonalan zwraca wartosc logiczna
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablic (x-ilosc wierszow , y - ilosc kolumn)
 */
bool matrixIsDiagonal(double **tab,int x,int y);

/*
 * Funckja zamienia miejscami 2 zmienne typu int
 */
void swap(int &a,int &b);
/*
 * Funckja zamienia miejscami 2 zmienne typu double
 */
void swap(double &a,double &b);

/*
 * Funkcja sortuje tablice jednowmiarowa int sortowaniem bąbelkowym
 *  Opis parametrów:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x: wymiar tablicy
 */
void sortRow(int *tab,int x);

/*
 * Funkcja sortuje tablice jednowmiarowa int sortowaniem bąbelkowym
 *  Opis parametrów:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x: wymiar tablicy
 */
void sortRow(double *tab,int x);

/*
 * Funkcja sortuje wiersze macierzy int sortowaniem bąbelkowym
 *  Opis parametrów:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiar tablicy
 */
void sortRowsInMatrix(int **tab,int x,int y);

/*
 * Funkcja sortuje wiersze macierzy double sortowaniem bąbelkowym
 *  Opis parametrów:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiar tablicy
 */
void sortRowsInMatrix(double **tab,int x,int y);

int determinantMatrix( int** matrix, int n);

double determinantMatrix( double** matrix, int n);
