#include <iostream>
using namespace std;

class sporcu{
public:
  string isim,ulke;
  friend ostream& operator<<(ostream&, sporcu&);
  friend istream& operator>>(istream&, sporcu&);
};
class patenci:public sporcu{
public:
  patenci(){ort();}
  float skor[10]={5.5,5.6,4.3,5.9,4.6,5.5,5.7,5.4,4.9,5.7};
  float ortPuan;
  void ort();
  friend ostream& operator<<(ostream&, patenci&);
};
void patenci::ort(){
  float toplam=0;
  float enB=0;
  float enK=skor[0];
  int Bflag,Kflag;
  
  for(int i=0;i<10;i++){
    if(enK>skor[i]){
      enK=skor[i];//en buyuk en kucuk bulunacak ve çıkarılacak
      Kflag=i;
    }
  }
  for(int i=0;i<10;i++){
    if(enB<skor[i]){
      enB=skor[i];//en buyuk en kucuk bulunacak ve çıkarılacak
      Bflag=i;
    }
  }
  cout<<"Enbuyuk flag==>"<<Bflag<<endl<<"Enkucuk flag==>"<<Kflag<<endl;
  for(int i=0;i<10;i++){
    if(i==Bflag || i==Kflag){
      continue;
    }
  toplam+=skor[i];
  }
  ortPuan=toplam/8;
}

istream& operator>>(istream &is, sporcu& n){
  cout<<"Patencinin ismini giriniz: ";
  is>>n.isim;
  cout<<"Patencinin ulkesini giriniz: ";
  is>>n.ulke;
  return is;
}
ostream& operator<<(ostream &os, sporcu& e){
  os<<"Isim: "<<e.isim<<endl;
  os<<"Ulke: "<<e.ulke<<endl;
  os<<"Skorlar: ";
}
ostream& operator<<(ostream &os,patenci& ab){
  cout<<"Skorlar: ";
  for(int i=0;i<10;i++)
    cout<<ab.skor[i]<<" ";
  cout<<endl<<"Isim: "<<ab.sporcu::isim<<endl<<"Ulke: "<<ab.sporcu::ulke<<endl;
  cout.precision(3);
  cout<<"Ortalama: "<<ab.ortPuan<<endl;
}
int main(){
  patenci a;
  cin>>a;
  cout<<a;
}
