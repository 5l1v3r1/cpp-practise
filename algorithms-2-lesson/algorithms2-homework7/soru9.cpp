//
// Created by mert on 6.05.2020.
//

#include "iostream"
using namespace std;
class Uye{
public:
    string isim;
    int alinanGun;
    friend istream& operator>>(istream&,Uye&);
    void yaz();
    virtual void hesapla()=0;
};
class Ogrenci: public Uye{
public:
    int ogrenciNo;
    void hesapla();
};
void Ogrenci::hesapla() {
if (alinanGun>3){
    cout<<"Kitabi Iade etmeniz Gerekmektedir."<<endl<<"Tutar: "<<((alinanGun-3)*2)<<" lira."<<endl;
} else{
    cout<<"Kitabi Iade Etmeniz Için Kalan Gün Sayisi: "<<3-alinanGun<<" gundur."<<endl;
}
}
class Ogretmen: public Uye{
public:
    int personelNo;
    void hesapla();
};
void Ogretmen::hesapla() {
    if(alinanGun>5){cout<<"Kitabi Idade Etmeniz Gerekmektedir."<<endl<<"Tutar: "<<(alinanGun-5)*1<<" lira.";}
    else{ cout<<"Kitabi Iade Etmeniz Icin Kalan Gün Sayisi: "<<5-alinanGun<<" gündür.";}
}
istream& operator>>(istream& is, Ogrenci &u){
    cout<<"Ogrenci NO:";
    is >> u.ogrenciNo;
    cout<<"Kitabın İsmi:";
    is >> u.isim;
    cout<<"Alinan Gun:";
    is >> u.alinanGun;
}

istream& operator>>(istream& is, Ogretmen &u){
    cout<<"Personel NO:";
    is >> u.personelNo;
    cout<<"Kitabın İsmi:";
    is >> u.isim;
    cout<<"Alinan Gun:";
    is >> u.alinanGun;
}


int main(){
    char f;
cout<<"Hoca için (H), Ogrenci icin (O) giriniz:";
cin>>f;
if (f=='O'){
    Ogrenci *ogrenci= new Ogrenci;
    cin>>*ogrenci;
    ogrenci->hesapla();
} else{
    Ogretmen *ogretmen= new Ogretmen;
    cin>>*ogretmen;
    ogretmen->hesapla();
}
}