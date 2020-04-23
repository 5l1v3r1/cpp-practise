#include <iostream>
using namespace std;
class A{
    int x;
public:
    A(int _x=0):x(_x){}
    friend ostream& operator<<( ostream&, A& );
    friend A operator+(A&,A&);
};
ostream& operator<<(ostream &os, A& n){
    os<<n.x;
    return os;
}
int main() {
    A a1(5), a2(3), a3;
    cout<<a1<<endl;
    return 0;
}
