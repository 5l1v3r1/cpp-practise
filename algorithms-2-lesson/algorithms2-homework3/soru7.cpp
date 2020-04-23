#include<iostream>
using namespace std;
class Polinom{
private:
  int katsayi[5];
  int derece;
public:
  Polinom(int);
  void katsayiAta();
  void yaz();
  void topla(Polinom);
};
Polinom::Polinom(int _derece): derece(_derece){}
void Polinom::katsayiAta(){
  cout<<"Katsayilari Giriniz:"<<endl;
  for(int i=derece;i>=0;i--){
    cout<<"Katsayi "<<i<<": ";
    cin>>katsayi[i];
  }
}
void Polinom::yaz(){
  cout<<"(";
  for(int i=derece;i>=0;--i){
    if(katsayi[i]==0){continue;}
    if(i==1){cout<<katsayi[i]<<"x"<<"+"; continue;}
    if(i==0){cout<<katsayi[i];continue;}
    cout<<katsayi[i]<<"x"<<i<<"+";
  }
  cout<<")";
}
void Polinom::topla(Polinom a){
for(int i=0;i<=derece;i++){
  katsayi[i]=katsayi[i]+a.katsayi[i];
}
}
int main(){
int x;
cout<<"Katsayilarin derecesini giriniz:";
cin>>x;
Polinom pol(x),pol1(x);
pol.katsayiAta();
pol1.katsayiAta();
pol.yaz();
cout<<"+";
pol1.yaz();
cout<<" = ";
pol.topla(pol1);
pol.yaz();
return 0;
}
