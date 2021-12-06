//
// Created by Szymon on 15.11.2021.
//

#include <iostream>
#include <math.h>
#include<triangle.h>
#include<wektor.h>
using namespace std;
int main(){
/*Node A = Node(1,2);
Node B = Node(2,2);
cout << pointsDistance(A,B);*/
    Node a, b(5,8), c(1, 16);
    triangle trojkat(a, b, c, "First Triangle");

    trojkat.display();
    cout << triangle << endl;
}