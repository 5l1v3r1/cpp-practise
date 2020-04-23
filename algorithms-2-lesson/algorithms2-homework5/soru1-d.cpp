//
// Created by mert on 23.04.2020.
//

#include <iostream>
using namespace std;
class A{
    int x;
public:
    A(int _x=0):x(_x){}
    friend bool operator>(A&,int);
};
bool operator>(A& a1, int a2){
    return a1.x>a2;
}
int main() {
    A a1(5), a2(3), a3;
    if(a1>4)//true
        return 0;
}