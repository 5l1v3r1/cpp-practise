//
// Created by mert on 6.05.2020.
//
#include "iostream"
using namespace std;

class HastaFatura{
public:
    string isim,sirket;
    double hastanePayi,IlacMasrafi;
    virtual void odeme();
    HastaFatura(string _isim, double _hastanePayi, double _IlacMasrafi,string _sirket):isim(_isim),sirket(_sirket),hastanePayi(_hastanePayi),IlacMasrafi(_IlacMasrafi){}

};

void HastaFatura::odeme() {
    cout<<"Hasta Ismi: "<<isim<<"--- Toplam Ucret: "<<hastanePayi+IlacMasrafi<<" Lira"<<endl;
}

class SigortaliHastaFatura: public HastaFatura{
private:
public:
    SigortaliHastaFatura(string _sim, double _hastPayi, double _IlacMasrafi,string _sirkt):HastaFatura(_sim,_hastPayi,_IlacMasrafi,_sirkt){}
    void odeme();
};
void SigortaliHastaFatura::odeme() {
    cout<<"Hasta Ismi: "<<isim<<"--- Sigorta: "<<sirket<<"--- Toplam Ucret: "<<IlacMasrafi-IlacMasrafi*0.8<<" Lira"<<endl;
};

int main() {
char s;
string isim,sirket;
float ilacMasrafi,hastanePayi;
    HastaFatura* faturalar[20];
    for (int i = 0; i < 20; i++) {
        cout<<"Hasta Sigortali mi?(E/H):";
        cin>>s;
        cout<<"Hastanin Ismi:";
        cin>>isim;
        cout<<"Hastane Ucreti:";
        cin>>hastanePayi;
        cout<<"Ilac masrafi:";
        cin>>ilacMasrafi;
        if (s=='E'){
            cout<<"Sigorta Sirketi: ";
            cin>>sirket;
            faturalar[i]=new SigortaliHastaFatura(isim,hastanePayi,ilacMasrafi,sirket);
        }
        else{faturalar[i]=new HastaFatura(isim,hastanePayi,ilacMasrafi,sirket);}
        faturalar[i]->odeme();
    }
    return 0;
}