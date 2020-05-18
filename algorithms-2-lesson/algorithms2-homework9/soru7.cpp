//
// Created by mertdot on 5/18/20.
//
#include "iostream"
using namespace std;
class kuralDisiDurumSinifi: public exception{
public:
    int gun, ay, yil;
    string isim;
    int dGun, dAy, dYil;
    const char* what() const throw(){ return " yanlis girilmistir.";}
    int dHesapla(kuralDisiDurumSinifi&);
}hata;
int kuralDisiDurumSinifi::dHesapla(kuralDisiDurumSinifi& k) {
    if (dGun>30){ throw k;}
    if(dAy>12){throw  k;}
    if (ay>dAy){return ((dGun-gun)+(12-(ay-dAy))*30);}
    else{return ((dGun-gun)+(dAy-ay)*30);}
}
int main() {
    int kalanGun;
    cout << "Bugunun tarihi: ";
    cin >> hata.gun >> hata.ay >> hata.yil;
    while (1) {
        cin >> hata.isim >> hata.dGun >> hata.dAy >> hata.dYil;
        try {
            kalanGun=hata.dHesapla(hata);
            cout << hata.isim << ", dogum gunune " << kalanGun << " gun kaldi."<<endl;
        } catch (kuralDisiDurumSinifi &e) {
            cout << hata.dGun << "/" << hata.dAy << "/" << hata.dYil << e.what();
            return 0;
        };
    }
}