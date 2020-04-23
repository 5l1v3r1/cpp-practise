//
// Created by mert on 23.04.2020.
//
#include "iostream"
using namespace std;
class Renk{
private:
    int r,g,b;
    int a[3];
public:
    Renk(int _r=0, int _g=0, int _b=0):r(_r),b(_b),g(_g){a[0]=r;a[1]=g;a[2]=b;}
    void goruntule();
    Renk operator+(Renk&);
    Renk friend operator+(int,Renk&);
    int operator[](int i);
};
int Renk::operator[](int i) {
    return a[i];
}
Renk Renk::operator+(Renk &rX) {
    Renk newR;
    newR.r=rX.r+r;
    newR.g=rX.g+g;
    newR.b=rX.b+b;
    return newR;
}
void Renk::goruntule() {
    cout<<"("<<r<<","<<g<<","<<b<<")"<<endl;
}
Renk operator+(int a, Renk& rY){
    rY.r=rY.r+a;
    rY.g=rY.g+a;
    rY.b=rY.b+a;
    return rY;
}
int main(){
    Renk r1(255,67,123), r2(0,34,56), r3;
    r1.goruntule();
    r2.goruntule();
    r3=r1+r2;
    r3.goruntule();
    r2=20+r2;
    r2.goruntule();
    r3.goruntule();
    cout<<r1[0]<<endl;
    cout<<r1[1]<<endl;
    cout<<r1[2]<<endl;
    return 0;
}