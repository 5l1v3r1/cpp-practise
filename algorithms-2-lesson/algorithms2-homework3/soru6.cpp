#include<iostream>
using namespace std;
class TelefonRehberi{
private:
  string *isim;
  int *telefon;
public:
  TelefonRehberi(string *_isim, int *_telefon):isim(_isim),telefon(_telefon){}
  TelefonRehberi(TelefonRehberi &rehb);
  void yazdir();
};
TelefonRehberi::TelefonRehberi(TelefonRehberi &rehb){
  isim= rehb.isim;
  telefon= rehb.telefon;
}
void TelefonRehberi::yazdir(){
  for(int i=0;i<5;i++){
    cout<<isim[i]<<" "<<telefon[i]<<endl;
  }
}

int main(){
  string isim[]={"Aydan Sener", "Fatma Girik", "Filiz Akın", "Hulya Kocyigit","Turkan Soray"};
  int telefon[] = {1111111,2222222,3333333,4444444,5555555};
  TelefonRehberi rehber1(isim,telefon);
  TelefonRehberi rehber2(rehber1);
  rehber2.yazdir();
}
