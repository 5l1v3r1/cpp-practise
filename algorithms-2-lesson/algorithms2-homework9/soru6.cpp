#include <iostream>
using namespace std;

class AyniSayiHatasi: public exception{
public:
    int sayi[10];
    int indis[10];
    int flag=0;
    const char* what() const throw(){return " indekse daha önce okunmustur.";}
}hata;

int main(){
    int i;
    int yuzElemanlikDizi[100]={0}; //bütün elemanlari sifir yaptik.
    int alinanSayi;
    cout<<"Sayilari girin (-1 ile bitirin):";
  for (i = 0; i < 99; i++) {
        cin>>alinanSayi;
        if (alinanSayi==-1){break;}
        for (int j = 0; j < i+1; j++) {
            try {
                if (i != j && alinanSayi == yuzElemanlikDizi[j]) {
                    i--;
                    hata.sayi[hata.flag] = alinanSayi;
                    hata.indis[hata.flag++] = j;
                    throw hata;
                } else {
                    yuzElemanlikDizi[i] = alinanSayi;
                }
            } catch (exception& e) {
                cout<<hata.sayi[hata.flag-1]<<" Sayisi "<<hata.indis[hata.flag-1]<<e.what()<<endl;
                break;
            }
        }
    }
    cout<<"Dizi icerigi: ";
    for (int l = 0; l < i; ++l) {
        cout<<yuzElemanlikDizi[l]<<" ";
    }
}
