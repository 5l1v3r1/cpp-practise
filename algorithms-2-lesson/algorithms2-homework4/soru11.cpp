#include <iostream>
using namespace std;
class Zaman{
    int saat,dakika;
public:
    void oku();
    void yaz();
    void arttir(int);
    friend class Ucus;
};
void Zaman::oku() {
    cin>>saat>>dakika;
}
void Zaman::yaz() {
    cout<<saat<<":"<<dakika;
}
void Zaman::arttir(int dak) {
    if((dakika+dak)>60){saat++;dakika=((dakika+dak)-60);}
    else{dakika+=dak;}
    if(saat>24){saat=0;}
    else{saat++;}
}
class Ucus{
public:
    int ucusno;
    Zaman kalkis,varis;
    Ucus(int _ucusno=NULL):ucusno(_ucusno){}
    void rotar(int, Zaman);
    void goster();
};
void Ucus::rotar(int r, Zaman a) {
    if((r+a.dakika)>60){a.saat++;a.dakika=(r+a.dakika)-60;}
    else{a.dakika=a.dakika+r;}
    if(a.saat>24){a.saat=0;}
    else{a.saat++;}
}
int main(){
    int usay,r;
    cout<<"Ucus sayisini giriniz: ";
    cin>>usay;
    Ucus ucusTarife[usay];
    for (int i = 0; i < usay ; i++) {
        cout<<"Ucus numaras, kalkis ve varis saatlerini giriniz : ";
        cin>>ucusTarife[i].ucusno;
        ucusTarife[i].kalkis.oku();
        ucusTarife[i].varis.oku();
    }
    cout<<"Rotar bilgisini dakika degerinde giriniz: ";
    cin>>r;
    for (int j = 0; j < usay; ++j) {
        ucusTarife[i].rotar(r,ucusTarife[i].varis);
        ucusTarife[i].rotar(r,ucusTarife[i].kalkis);
    }
    cout<<"Tüm ucuslarda "<<r<<" dakikalık rotar olacaktır."<<endl
        <<"Guncellenmis ucus Tarifesi:"<<endl;
}