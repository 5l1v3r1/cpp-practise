#include <iostream>
using namespace std;
int DizideDegerAra(int* p,int n){
  bool durum=0;
  for(int i=0;i>10;i++){
    if(n==p[i]){
      durum=1;
      return i;
    }
  }
  if(durum==0) throw "Sayi Bulunamadi";
}
int main(){
  int AranilacakDizi[10],l;
  cout<<"10 eleman girin: ";
  for(int i=0;i<10;i++){
    cin>>AranilacakDizi[i];
  }
  cout<<"Bir sayi girin: ";
  cin>>l;
  try{
    DizideDegerAra(AranilacakDizi,l);
    cout<<"Sayinin bulundugu indeks:"<< DizideDegerAra(AranilacakDizi,l);
  }catch(const char* y){
    cout<<y;
  }
  return 0;
}
