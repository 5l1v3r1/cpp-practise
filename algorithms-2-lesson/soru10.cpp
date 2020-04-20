#include <iostream>
#include <string>
using namespace std;
class EPosta{
    int sayi;
    string* kelimeler;
    string alan,yollayan;
public:
    EPosta(int _sayi=100):sayi(_sayi){kelimeler= new string[_sayi];}
    ~EPosta(){delete[] kelimeler;}
    static int adet;
    void oku();
};
void EPosta::oku() {
    cout<<"Mesajdaki kelime sayisini giriniz:";
    cin>>sayi;
    kelimeler= new string[sayi];
    if(sayi>10){EPosta::adet++;}
    cout<<"Alanin soyadini giriniz: ";
    cin>>alan;
    cout<<"Yollayanin soyadini giriniz: ";
    cin>>yollayan;
    cout<<"Mesaji giriniz: ";
    for(int i=0;i<sayi;i++){cin>>kelimeler[i];}
}
int EPosta::adet=0;
int main(){
    EPosta e[50];
    for (int i = 0; i < 50; i++) {e[i].oku();}
    cout<<"10 Kelimeden uzun mesajlarin sayisi: "<<EPosta::adet;
}