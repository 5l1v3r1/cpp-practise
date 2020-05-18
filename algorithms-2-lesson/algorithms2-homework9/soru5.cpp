#include <iostream>
using namespace std;
template<class a>
a girdiFonksiyonu(a deger,a deger1) throw(const int){
  a deger3;
  cout<<"Devam etmek istiyor musunuz?";
  cin>>deger3;
  if(deger3 == deger){
    return true;
  }
  else if(deger3 == deger1){
    return false;
  }
  else throw -5;
}
int main(){
  int sayi=1;
  try{
    while(girdiFonksiyonu(1,0)){
      cout<<sayi++<<endl;
    }
  }catch(const int i){cout<<"Yanlis karakter..."<<endl;}
  return 0;
}
