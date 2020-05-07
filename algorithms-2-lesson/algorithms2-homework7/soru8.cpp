//
// Created by mert on 6.05.2020.
//
#include "iostream"
using namespace std;
class Gelir{
public:
    int sure;
    char s;
    friend std::istream& operator>>(std::istream&, Gelir&);
    virtual void hesap()=0;
};
class diziGelir: public Gelir{
public:
    int bolumSay;
    void hesap();
};
void diziGelir::hesap() {
cout<<"Dizinin Fiyati: "<<bolumSay*((sure/30)*50000)<<" lira."<<endl;
}


class reklamGelir: public Gelir{
public:
    char zaman;
    void hesap();
};
void reklamGelir::hesap() {
    if (zaman=='S'){
        cout<<"Reklamin fiyati: "<<sure*20000<<" lira."<<endl;
    } else{
        cout<<"Reklamin fiyati: "<<sure*40000<<" lira."<<endl;
    }
}


std::istream& operator>>( std::istream &is, diziGelir& g){
    cout<<"Dizinin bolum sayisini giriniz:";
    is >> g.bolumSay;
    cout<<"Bolumun uzunlugunu giriniz:";
    is>> g.sure;
}
std::istream& operator>>( std::istream &is, reklamGelir& r){
    cout<<"Reklamin süresini giriniz:";
    is >> r.sure;
    cout<<"Reklamin zaman dilimi (S/A):";
    is>> r.zaman;
}
int main(){
    char s;
    cout<<"Reklam icin (R), Dizi, Film icin (D) girin: ";
    cin>>s;
    if (s=='D'){
        diziGelir gel;
        cin>>gel;
        gel.hesap();
    }
    else{
        reklamGelir rek;
        cin>>rek;
        rek.hesap();
    }
}