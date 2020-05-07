//
// Created by mert on 6.05.2020.
//
#include "iostream"
using namespace std;

class komut{
public:
    virtual void ac()=0;
    virtual void kapa()=0;
};

class TelevizyonAcKomutu: public komut{
public:
    void ac();
    void kapa();
};
void TelevizyonAcKomutu::kapa() { cout<<"None";}
void TelevizyonAcKomutu::ac() {
    cout<<"Televizyon aciliyor..."<<endl;
}
class TelevizyonKapaKomutu: public komut{
public:
    void kapa();
    void ac();
};
void TelevizyonKapaKomutu::ac() {cout<<"None";}
void TelevizyonKapaKomutu::kapa() {
    cout<<"Televizyon kapaniyor..."<<endl;
}

class OtoparkKapiAcKomutu: public komut{
public:
    void ac();
    void kapa();
};
void OtoparkKapiAcKomutu::kapa() {cout<<"None";}
void OtoparkKapiAcKomutu::ac() {
    cout<<"Otopark kapisi aciliyor..."<<endl;
}

class OtoparkKapiKapamaKomutu: public komut{
public:
    void kapa();
    void ac();
};
void OtoparkKapiKapamaKomutu::ac() {cout<<"None";}
void OtoparkKapiKapamaKomutu::kapa() {
    cout<<"Oropark kapisi kapaniyor..."<<endl;
}

class UzaktanKumanda{
public:
    void acmaKomutuAta(komut* kom);
    void kapamaKomutuAta(komut* kom);
    komut* ac;
    komut* kapa;
};
void UzaktanKumanda::acmaKomutuAta(komut* kom) {
    ac=kom;
}
void UzaktanKumanda::kapamaKomutuAta(komut* kom) {
    kapa=kom;
}

int main(){
UzaktanKumanda kumanda;
TelevizyonAcKomutu tvAcKomutu;
TelevizyonKapaKomutu tvKapaKomutu;
kumanda.acmaKomutuAta(&tvAcKomutu);
kumanda.kapamaKomutuAta(&tvKapaKomutu);
kumanda.ac->ac();
kumanda.kapa->kapa();
OtoparkKapiAcKomutu kapiAcKomutu;
OtoparkKapiKapamaKomutu kapiKapamaKomutu;
kumanda.acmaKomutuAta(&kapiAcKomutu);
kumanda.kapamaKomutuAta(&kapiKapamaKomutu);
kumanda.ac->ac();
kumanda.kapa->kapa();
}