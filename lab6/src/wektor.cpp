//
// Created by Szymon on 15.11.2021.
//
#include "wektor.h"
#include <iostream>
#include <math.h>
using namespace std;
Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}
double pointsDistance(Node a, Node b){
    return sqrt(pow(a.x+b.x,2)+pow(a.y+b.y,2));
};
void print(const Node &vector) {
    cout << vector.x << ", " << vector.y << endl;
}
