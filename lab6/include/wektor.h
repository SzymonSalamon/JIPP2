//
// Created by Szymon on 15.11.2021.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H
#include <iostream>

class Node {
private:
    double x, y;
    friend double pointsDistance(Node a, Node b);
    friend void print(const Node &vector);
public:
    Node();
    Node(double x, double y);
    void display();
    void updateValue(double x, double y);

};

#endif //JIPP2_NODE_H

