#include <iostream>
using namespace std;
int alan(float a, float b) throw (const char*){
  if((a==0)&&(b==0)){
    cout<<"a ve b degerleri sifir girilmistir."<<endl;
    throw "Hata olustu...";
}
  return (a*b)/2;
}
int main(){
  float a,b;
  float sonuc;
  cout<<"Eskenar dortgenin alan hesabi..."<<endl;
  cout<<"a:";
  cin>>a;
  cout<<"b:";
  cin>>b;
  try{
  sonuc=alan(a,b);
  cout<<"Alan:"<<sonuc<<endl;
  }catch(...){
    cout<<"Pogram sonlandirildi..."<<endl;
  }
  return 0;
}
