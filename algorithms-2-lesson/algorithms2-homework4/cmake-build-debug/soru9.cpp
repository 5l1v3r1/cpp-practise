#include <iostream>
#include <string>
#include <utility>
using namespace std;
class Kalem{
public:
    string isim;
    int adet;
    float fiyat;
    static float toplam;
    explicit Kalem(string _isim="bos",float _fiyat=0,int _adet=0):isim(std::move(_isim)),fiyat(_fiyat),adet(_adet){}
};
float Kalem::toplam=0;
int main(){
    Kalem dizi[10];
for(int i=0;i<10;i++){
    cout<<"Kalemin ismini giriniz: ";
    cin>>dizi[i].isim;
    cout<<"Kalemin fiyatini giriniz: ";
    cin>>dizi[i].fiyat;;
    cout<<"Kalemin adetini giriniz: ";
    cin>>dizi[i].adet;
    Kalem::toplam+=(dizi[i].fiyat*dizi[i].adet);
}
cout<<"Toplam Tutar: "<<Kalem::toplam<<" lira";
}