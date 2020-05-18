//
// Created by mertdot on 5/18/20.
//
#include "iostream"
using namespace std;
class kuralDisiDurum: public exception{
public:
    const char* what() throw(){return "hata";}
}hata;
class Ogrenci{
public:
    int ogrNo,derSay,i;
    float notlar[10],kredi[10],topKred=0;
    string isim[10];
    double gno=0;
    void hesapla(kuralDisiDurum&);
}ogrenci;
void Ogrenci::hesapla(kuralDisiDurum& e) {
    cout << "Ogrenci numarasini girin:";
    cin >> ogrNo;
    cout << "Ogencinin ders sayini girin:";
    cin>>derSay;
    cout<<"Derslerin isim not ve kredi bilgilerini girin:"<<endl;
        for (i = 0; i < derSay; i++) {
            cin >> isim[i] >> notlar[i] >> kredi[i];
            topKred = topKred + kredi[i];
            try{
            if (notlar[i] > 100) {
                topKred=topKred-kredi[i];
                i--;
                throw e;
            }
        } catch (kuralDisiDurum& k) {
            cout<<"Hata: "<<ogrenci.isim[ogrenci.i+1]<<" notu hatali olarak "<<ogrenci.notlar[ogrenci.i+1]<<" girildi."<<endl;
            continue;
        }
    }
    for (int j = 0; j < derSay; j++) {
        gno=gno+(notlar[j]*kredi[j])/topKred;
    }
}

int main(){
    ogrenci.hesapla(hata);
    cout<<"Ogrenci NO "<<ogrenci.ogrNo<<" Not Ortalamasi:"<<ogrenci.gno<<endl;
}