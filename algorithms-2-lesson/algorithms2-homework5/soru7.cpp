//
// Created by mert on 23.04.2020.
//
#include "iostream"
using namespace std;
class Konum{
    float enlem,boylam;
public:
    Konum(float _enlem=0, float _boylam=0):enlem(_enlem),boylam(_boylam){}
    Konum operator()(float,float);
    friend ostream& operator<<(ostream&, Konum&);
};
ostream& operator<<(ostream& os,Konum &kon){
    os<<"("<<kon.enlem<<","<<kon.boylam<<")"<<endl;
    return os;
}
Konum Konum::operator()(float a, float b) {
    Konum k;
    k.enlem=enlem+a;
    k.boylam=boylam+b;
    return k;
}
int main(){
 Konum k1(32.34,-35.65),k2;
 k2=k1(2.3,4.5);
 cout<<k1;
 cout<<k2;
}