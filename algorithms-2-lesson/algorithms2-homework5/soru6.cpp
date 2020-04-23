//
// Created by mert on 23.04.2020.
//
#include "iostream"
using namespace std;

class Nokta{
public:
    float x,y;
    friend ostream& operator<<(ostream&,Nokta&);
    void yaz();
};
class Dogru{
private:
    float x,y;
public:
    Dogru(float _x,float _y):x(_x),y(_y){}
    void yaz();
    Nokta operator-(Dogru&);
    Dogru operator++();
    Dogru operator++(int);
    friend ostream& operator<<(ostream&,Dogru&);
};
ostream& operator<<(ostream& os, Dogru &dog){
    os<<"y = "<<dog.x<<"x + "<<dog.y<<endl;
}
Dogru Dogru::operator++(int) {
    y++;
}
Dogru Dogru::operator++() {
    x++;
}
ostream& operator<<(ostream &os,Nokta& nokt){
    cout<<"("<<nokt.x<<", "<<nokt.y<<")"<<endl;
}
void Dogru::yaz() {
    cout <<"y = "<<x<<"x + "<<y<<endl;
}
void Nokta::yaz() {
    cout<<"("<<x<<", "<<y<<")"<<endl;
}

Nokta Dogru::operator-(Dogru &dog) {
    Nokta a;
    a.x=(abs(dog.y-y)/abs(x-dog.x));
    a.y=(x+y)*(abs(dog.y-y)/abs(x-dog.x));
    ;
    return a;
}
int main(){
    Dogru d1(2.0,4.0);
    Dogru d2(-2.0,2.0);
    Nokta n= d1-d2;
    cout<<n;
    ++d1; //y=2x+5 -> y=3x+5
    d1.yaz();
    d1++;
    cout<<d1;
    return 0;
}