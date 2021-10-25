//
// Created by Szymon on 19.10.2021.
//
/*
 * Funkcja wyswietla macierz
 *  Opis argumentow:
 *  tab: wskaznik do tablicy dwuwymiarowej przechowujacej macierz
 *  x,y: wymiary tablica (x-ilosc wierszow , y - ilosc kolumn)
 */
void showMatrix(int** tab,int x, int y){
    for(int i=0;i<x;i++) {
        for (int j = 0; j < y; j++)
            cout << tab[i][j] << " ";
        cout <<endl;
    }
}
void showMatrix(double** tab,int x, int y){
    for(int i=0;i<x;i++) {
        for (int j = 0; j < y; j++)
            cout << tab[i][j] << " ";
        cout <<endl;
    }
}
/*
 * Funkcja dynamicznie alokuje tablice dwuwymiarowa i zwraca wskaznik do niej
 *  Opis argumentow:
 *  x,y: wymiary tablica (x-ilosc wierszow , y - ilosc kolumn)
 */
int** makeMatrix(int x,int y,bool pusta=false) {
    int **tab = new int * [x];
    int i;
    for (i = 0; i < x; i++)
        tab[i] = new int[y];
    if(pusta==false) {
        for (i = 0; i < x; i++) {
            cout << i << "Podaj wartosci wiersza oddzielone spacja:" << endl;
            for (int j = 0; j < y; j++) {
                cout << "Podaj Wartosc:" << endl;
                cin >> tab[i][j];
            }
            cout << endl;

        }
    }
    if (pusta == true){
        for (i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                tab[i][j]=0;
    }
    return tab;
}
double** makeMatrixDouble(int x,int y,bool pusta=false) {
    double **tab = new double * [x];
    int i;
    for (i = 0; i < x; i++)
        tab[i] = new double[y];
    if(pusta==false) {
        for (i = 0; i < x; i++) {
            cout << i << "Podaj wartosci wiersza oddzielone spacja:" << endl;
            for (int j = 0; j < y; j++) {
                cout << "Podaj Wartosc:" << endl;
                cin >> tab[i][j];
            }
            cout << endl;

        }
    }
    if (pusta == true){
        for (i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                tab[i][j]=0;
    }
    return tab;
}
/* Funkcja dodaje do siebie dwie macierze i zwraca wskaznik do tablicy dwuwymiarowej przechowujacej wynik
 *Opis parametrów:
 * tab1,tab2: wskazniki do macierzy
 * x,y: wymiary tablica (x-ilosc wierszow , y - ilosc kolumn)
 */
int** addMatrix(int **tab1 ,int **tab2 ,int x,int y){
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            tab1[i][j] += tab2[i][j];
    return tab1;
}
double** addMatrix(double **tab1 ,double **tab2 ,int x,int y){
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            tab1[i][j] += tab2[i][j];
    return tab1;
}
int** subtractMatrix(int **tab1 ,int **tab2 ,int x,int y){
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            tab1[i][j] -= tab2[i][j];
    return tab1;
}
double** subtractMatrix(double **tab1 ,double **tab2 ,int x,int y){
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            tab1[i][j] -= tab2[i][j];
    return tab1;
}
int** multiplyMatrix(int **tab1 ,int **tab2 ,int x,int y,int z){
    int **tab = makeMatrix(x,z,true);
    for (int i = 0; i < x; ++i) {
        for(int j =0; j<z;j++){
            for(int a=0;a<y;a++)
                tab[i][j] += tab1[i][a]*tab2[a][j];
        }
    }
    return tab;
}
double** multiplyMatrix(double **tab1 ,double **tab2 ,int x,int y,int z){
    double **tab = makeMatrixDouble(x,z,true);
    for (int i = 0; i < x; ++i) {
        for(int j =0; j<z;j++){
            for(int a=0;a<y;a++)
                tab[i][j] += tab1[i][a]*tab2[a][j];
        }
    }
    return tab;
}
int** multiplyByScalar(int **tab1,int x,int y,int s){
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j)
            tab1[i][j] *= s;
    return tab1;
}
double** multiplyByScalar(double **tab1,int x,int y,double s){
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j)
            tab1[i][j] *= s;
    return tab1;
}
int** transpozeMatrix(int **tab1,int x,int y){
    int **tab = makeMatrix(y,x,true);
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j)
            tab[j][i] = tab1[i][j];
    return tab;
}
double** transpozeMatrix(double **tab1,int x,int y){
    double **tab = makeMatrixDouble(y,x,true);
    for (int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j)
            tab[j][i] = tab1[i][j];
    return tab;
}
int** powerMatrix(int **tab,int x,int y, int p){
    int **tab1 = makeMatrix(x,y,true);
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            tab1[i][j] = tab[i][j];
    for(int i=0;i<p-1;i++){
        tab1 = multiplyMatrix(tab1,tab,x,y,y);
    }
    return tab1;
}
double** powerMatrix(double **tab,int x,int y, int p){
    double **tab1 = makeMatrixDouble(x,y,true);
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            tab1[i][j] = tab[i][j];
    for(int i=0;i<p-1;i++){
        tab1 = multiplyMatrix(tab1,tab,x,y,y);
    }
    return tab1;
}
bool matrixIsDiagonal(int **tab,int x,int y){
    if(x!=y)
        return false;
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            if(i!=j && tab[i][j]!=0)
                return false;

    return true;
}
bool matrixIsDiagonal(double **tab,int x,int y){
    if(x!=y)
        return false;
    for(int i=0;i<x;i++)
        for(int j=0;j<x;j++)
            if(i!=j && tab[i][j]!=0)
                return false;

    return true;
}
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(double &a,double &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void sortRow(int *tab,int x){
    for(int a=0;a<(x-1);a++){
        for (int i=0; i<(x-a);i++)
        {
            if (tab[i-1]>tab[i])
                swap(tab[i],tab[i-1]);
        }
    }
}
void sortRow(double *tab,int x){
    for(int a=0;a<(x-1);a++){
        for (int i=0; i<(x-a);i++)
        {
            if (tab[i-1]>tab[i])
                swap(tab[i],tab[i-1]);
        }
    }
}
void sortRowsInMatrix(int **tab,int x,int y){
    for(int i=0;i<x;i++)
        sortRow(tab[i],y);
}
void sortRowsInMatrix(double **tab,int x,int y){
    for(int i=0;i<x;i++)
        sortRow(tab[i],y);
}
//determinantMatrix

