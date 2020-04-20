#include <iostream>

using namespace std;

class Nokta{
    int x,y;
public:
    Nokta(int _x,int _y):x(_x),y(_y){}
    void xAta(int _x){x=_x;}
    void yAta(int _y){y=_y;}
    float xAl(){return x;}
    float yAl(){return y;}
    friend class Dikdortgen;
};

class Dikdortgen{
    Nokta a,b;
public:
    Dikdortgen(Nokta _a, Nokta _b):a(_a),b(_b){}
    int alan();
    int cevre();
};
int Dikdortgen::alan() {
    return abs(a.x-b.x)*abs(a.y-b.y);
}
int Dikdortgen::cevre() {
    return 2*(abs(a.x-b.x)+abs(a.y-b.y));
}

int main(){
int x,y;
cout<<"a noktasi (x,y):";
cin>>x>>y;
Nokta a(x,y);
cout<<"b noktasi (x,y):";
cin>>x>>y;
Nokta b(x,y);
Dikdortgen d(a,b);
cout<<"Cevre:"<<d.cevre()<<endl;
cout<<"Alan:"<<d.alan()<<endl;
return 0;
}