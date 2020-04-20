#include <iostream>
using namespace std;
class Tarih{
private:
  int aylar[12] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int gun,ay,yil;
public:
  Tarih(int _gun=1,int _ay=1,int _yil=2012);
  void arttir();
  void goster();
};
Tarih::Tarih(int _gun,int _ay,int _yil):gun(_gun),ay(_ay),yil(_yil){}
void Tarih::arttir(){
if(gun+1>aylar[ay]){
  gun=1;
  ay++;
}
else if(ay>12){
  ay=1;
  yil++;
}
else{
gun++;
}

}
void Tarih::goster(){
cout<<gun<<" / "<<ay<<" / "<<yil<<endl;
}
int main(){
Tarih tarih(30,7);
cout<<"Bugun: ";
tarih.goster();
for(int i=1;i<=10;++i){
  tarih.arttir();
  tarih.goster();
}
return 0;
}
