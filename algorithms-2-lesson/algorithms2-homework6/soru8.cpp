#include<iostream>
using namespace std;
class atlet{
public:
  string isim,cinsiyet,ulke;
  friend istream& operator>>(istream&, atlet &);
};
class YuzMetreKosucu:public atlet{
public:
  int bitisZamani;
  static int kazananZaman;
  static string kazananIsim;
  YuzMetreKosucu(int _bitisZamani,atlet a):bitisZamani(_bitisZamani),atlet(a){    
      if(kazananZaman<bitisZamani){
	kazananZaman=bitisZamani;
	kazananIsim=isim;
    }
  };
  friend istream& operator>>(istream&, YuzMetreKosucu &);
};
istream& operator>>(istream &is, atlet& a){
  is>>a.isim;
  is>>a.cinsiyet;
  is>>a.ulke;
  return is;
}
istream& operator>>(istream &is, YuzMetreKosucu& y){
  is>>y.bitisZamani;
}
int main(){
  atlet dizi[15];
  for(int i=0;i<3;i++){
    cin>>atlet;
  }
  for(int i=0;i<3;i++){
    YuzMetreKosucu kosucu(süre[i],dizi[i]);
  }
  cout<<kosucu.kazananIsim<<" "<<kosucu.kazananZaman;
}
