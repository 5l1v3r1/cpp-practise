//
// Created by mert on 23.04.2020.
//

#include "iostream"
using namespace std;
class Tarih{
private:
    int yil,ay,gun;
public:
    Tarih(int _yil,int _ay, int _gun):yil(_yil),ay(_ay),gun(_gun){}
    int yilAl(),ayAl(),gunAl();
    bool operator>(Tarih&);
};
class Urun {
private:
    int urunKodu;
    Tarih uretimTarihi,sonKullanmaTarihi;
public:
    Urun(int _urunKodu, Tarih _uretimTarihi, Tarih _sonKullanmaTarihi):urunKodu(_urunKodu),uretimTarihi(_uretimTarihi),sonKullanmaTarihi(_sonKullanmaTarihi){}
    Tarih sonKullanmaTarihiAl(),uretimTarihiAl();
    int urunKoduAl();
    //bool operator>(Urun&);
};
    bool Tarih::operator>(Tarih& a1){
    if(a1.yil>yil){ return false;}
    else if(a1.ay>ay){return false;}
    else if(a1.gun>gun){return false;}
    else{return true;}
}
bool Tarih::operator>(Tarih& h1){
    if(h1.yilAl()>yilAl()){ return false;}
    else if(h1.ayAl()>ayAl()){return false;}
    else if(h1.gunAl()>gunAl()){return false;}
    else{return true;}
}
int Urun::urunKoduAl() {return urunKodu;}
Tarih Urun::sonKullanmaTarihiAl() {return sonKullanmaTarihi;}
Tarih Urun::uretimTarihiAl() {return uretimTarihi;}
int Tarih::ayAl() {return ay;}
int Tarih::gunAl() {return gun;}
int Tarih::yilAl() {return yil;}

int main(){
    Tarih uretim(2012,07,12);
    Tarih sonKullanma(2012,07,15);
    Urun sut (102,uretim,sonKullanma);
    int yil,ay,gun;
    cout<<"Bugunun tarihini giriniz(yil,ay,gun): ";
    cin>>yil>>ay>>gun;
    Tarih bugun(yil,ay,gun);
    if (bugun>sut.sonKullanmaTarihiAl()){cout<<"Gunu gecmis urun lutfen kullanmayiniz..."<<endl;}
    if (sut.sonKullanmaTarihiAl()>bugun){cout<<"Urunu guvenle kullanabilirsiniz..."<<endl;}
    return 0;
}