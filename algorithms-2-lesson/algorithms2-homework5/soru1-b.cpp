//
// Created by mert on 23.04.2020.
//

#include <iostream>
using namespace std;
class A{
    int x;
public:
    A(int _x=0):x(_x){}
    friend ostream& operator<<( ostream&, A& );
    friend A operator+(A&,A&);
};
A operator+(A& x, A& y){
    return x.x+y.x;
}
int main() {
    A a1(5), a2(3), a3;
    a3=a1+a2; //a3.x=8
    return 0;
}
