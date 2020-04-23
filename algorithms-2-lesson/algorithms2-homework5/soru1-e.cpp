//
// Created by mert on 23.04.2020.
//

#include <iostream>
using namespace std;
class A{
    int x;
public:
    A(int _x=0):x(_x){}
    friend istream& operator>>(istream&,A&);
};
istream& operator>>(istream& is, A& a1){
    is>>a1.x;
    return is;
}
int main() {
    A a1(5), a2(3), a3;
    cin>>a2;
    return 0;
}