//
// Created by Szymon on 19.10.2021.
//

void showMatrix(int** tab,int x, int y);
void showMatrix(double** tab,int x, int y);

int** makeMatrix(int x,int y,bool pusta=false);
double** makeMatrixDouble(int x,int y,bool pusta=false);

int** addMatrix(int **tab1 ,int **tab2 ,int x,int y);
double** addMatrix(double **tab1 ,double **tab2 ,int x,int y);

int** subtractMatrix(int **tab1 ,int **tab2 ,int x,int y);
double** subtractMatrix(double **tab1 ,double **tab2 ,int x,int y);

int** multiplyMatrix(int **tab1 ,int **tab2 ,int x,int y,int z);
double** multiplyMatrix(double **tab1 ,double **tab2 ,int x,int y,int z);

int** multiplyByScalar(int **tab1,int x,int y,int s);
double** multiplyByScalar(double **tab1,int x,int y,double s);

int** transpozeMatrix(int **tab1,int x,int y);
double** transpozeMatrix(double **tab1,int x,int y);

int** powerMatrix(int **tab,int x,int y, int p);
double** powerMatrix(double **tab,int x,int y, int p);

bool matrixIsDiagonal(int **tab,int x,int y);
bool matrixIsDiagonal(double **tab,int x,int y);

void swap(int &a,int &b);
void swap(double &a,double &b);

void sortRow(int *tab,int x);
void sortRow(double *tab,int x);

void sortRowsInMatrix(int **tab,int x,int y);
void sortRowsInMatrix(double **tab,int x,int y);
