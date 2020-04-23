//
// Created by mert on 23.04.2020.
//

#include <iostream>
using namespace std;
class A{
    int x;
public:
    A(int _x=0):x(_x){}
    friend A operator+=(A&,A&);
};
A operator+=(A& x, A& y){
    x.x=x.x+y.x;
    return 0;
}
int main() {
    A a1(5), a2(3), a3;
    a1+=a2; //a1.x=8
    return 0;
}