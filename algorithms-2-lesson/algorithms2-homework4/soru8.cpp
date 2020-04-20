#include <iostream>
#include <string>
using namespace std;
class VucutKutlesi{
    float boy;
    float kilo;
    string durum;
public:
    VucutKutlesi(float _boy, float _kilo):kilo(_kilo),boy(_boy){}
    float vkiHesapla();
    float idealKiloHesapla();
    friend void testVkiHesapla();
    friend void testIdealKiloHesapla();


};
float VucutKutlesi::vkiHesapla() {
    return (kilo/(boy*boy));
}
float VucutKutlesi::idealKiloHesapla() {
    return ((boy*boy)*22);
}
void testVkiHesapla(){
    float k,b,sonuc;
    cout<<"VKI hesabi test ediliyor.."<<endl<<"Kilo: ";
    cin>>k;
    cout<<"Boy: ";
    cin>>b;
    VucutKutlesi x(b,k);
    sonuc=(x.kilo/(x.boy*x.boy));
    if(sonuc==x.vkiHesapla()){cout<<"Test Basarili..."<<endl<<endl;}
    else{cout<<"Test Basarisiz..."<<endl<<endl;}
}
void testIdealKiloHesapla(){
    float k,b,sonuc;
    cout<<"Ideal kilo hesabi test ediliyor.."<<endl<<"Kilo: ";
    cin>>k;
    cout<<"Boy: ";
    cin>>b;
    VucutKutlesi x(b,k);
    sonuc=((x.boy*x.boy)*22);
    if(sonuc==x.idealKiloHesapla()){cout<<"Test Basarili..."<<endl<<"Ideal Kilo: "<<x.idealKiloHesapla()<<endl;}
    else{cout<<"Test Basarisiz..."<<endl<<"Hesaplanan: "<<x.idealKiloHesapla()<<endl<<"Olmasi Gereken: "<<sonuc<<endl;}
}

int main(){
    /*
    float k,b;
    string kategori[]{"Aclik", "Zayif","Normal","Kilolu", "Obez"};
    cout<<"Kilo:";
    cin>>k;
    cout<<"Boy:";
    cin>>b;
    VucutKutlesi a(b,k);
    if(a.vkiHesapla()>15&&a.vkiHesapla()<30){
        if(a.vkiHesapla()<18.5){cout<<"Kategori: "<<kategori[1];}
        else if(a.vkiHesapla()<25){cout<<"Kategori: "<<kategori[2];}
        else if(a.vkiHesapla()<30){cout<<"Kategori: "<<kategori[3];}
    }
    else if(a.vkiHesapla()<15){cout<<"Kategori: "<<kategori[0]<<endl;}
    else if(a.vkiHesapla()>30){cout<<"Kategori:"<<kategori[4]<<endl;}
    else{cout<<"Deger yanlis hesaplandi..."<<endl;}
    cout<<"İdeal Kilonuz:"<<a.idealKiloHesapla()<<endl;
     */
    testVkiHesapla();
    testIdealKiloHesapla();
    return 0;
}