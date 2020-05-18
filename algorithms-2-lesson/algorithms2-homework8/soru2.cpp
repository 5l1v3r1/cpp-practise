#include <iostream>
using namespace std;

template<class T>
void diziYazdir(T* dizi,int s){
  for(int i=0;i<s;i++){
    cout<<"dizi"<<"["<<i<<"] = "<<dizi[i]<<endl;
      }
  cout<<endl;
}

int main(){
 string renkler[3]= {"Siyah", "Beyaz", "Mavi"};
 int sayilar[5]={1,3,5,7,9};
 float agirliklar[6]={3.4,6.7,8.9,10.1,2.9};
 diziYazdir(renkler,3);
 diziYazdir(sayilar,5);
 diziYazdir(agirliklar,6);
}
