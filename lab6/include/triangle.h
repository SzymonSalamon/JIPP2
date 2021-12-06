//
// Created by Szymon on 15.11.2021.
//

#ifndef INC_2_TRIANGLE_H
#define INC_2_TRIANGLE_H
#include "wektor.h"

using namespace std;
class triangle{
private:
    Node A,B,C;
    string nazwa;
public:

    triangle();

    triangle(Node A,Node B,Node C,string nazwa);

    void display();

    Node getpointA();
    Node getpointB();
    Node getpointC();
    double distance(int pierwszy,int drugi);
};
#endif //INC_2_TRIANGLE_H
