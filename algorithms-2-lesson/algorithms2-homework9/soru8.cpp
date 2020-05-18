//
// Created by mertdot on 5/18/20.
//
#include "iostream"
using namespace std;
class ZamanHata: public exception{
public:
    int dak,sat;
    const char* what() throw(){ return " yanlis yazilmistir";}
    void hesapla();
}hata;
void ZamanHata::hesapla() {
if(sat>24){throw hata;}
if(dak>60){throw hata;}
if(sat>12){sat=sat-12;}
}
int main(){
    char kontrol;
    int dakk,satt;
while (kontrol!='H'){
    cout<<"24 saat formatinda saati girin:";
    cin>>hata.sat>>hata.dak;
    try {
        hata.hesapla();
        dakk=hata.dak;
        satt=hata.sat;
    } catch (ZamanHata& e) {
        cout<<e.sat<<":"<<e.dak<<e.what()<<endl;
        continue;
    }
    if(dakk<10){cout<<"12 saat formatina cevriliyor: "<<satt<<":0"<<dakk<<endl;}
    else {cout<<"12 saat formatina cevriliyor: "<<satt<<":"<<dakk<<endl;}
    cout<<"Devam edelim mi (E/H):";
    cin>>kontrol;
}
}
