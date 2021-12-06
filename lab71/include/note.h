//
// Created by Szymon on 22.11.2021.
//
#include<string>
#ifndef INC_2_FIGURY_H
#define INC_2_FIGURY_H

using namespace std;
class Figure{
public:
    virtual double getArea()=0;
};
class Circle{
private:
    int promien;
public:
    Circle(int promien);
    //void getArea();
};
class Rectangle{
private:
    int bok1,bok2,bok3,bok4;
public:
    Rectangle(int bok1,int bok2);
};
#endif //INC_2_FIGURY_H
