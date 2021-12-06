//
// Created by Szymon on 15.11.2021.
//

#include "triangle.h"
#include <iostream>
void triangle::display(){
    cout << "Wierzcholki:"<<endl;
    print(getpointA());
    cout <<endl;
    print(getpointB());
    cout <<endl;
    print(getpointC());
    cout <<endl;

};
triangle::triangle(Node A, Node B, Node C, string nazwa): A(A),B(B),C(C),nazwa(nazwa) {}
Node triangle::getpointA(){
    return A;
}
Node triangle::getpointB(){
    return B;
}Node triangle::getpointC(){
    return C;
}


