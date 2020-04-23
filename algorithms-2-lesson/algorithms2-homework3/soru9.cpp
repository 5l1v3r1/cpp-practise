#include<iostream>
using namespace std;
class Seans{
private:
  int doluKoltuk;
public:
  Seans(int _doluKoltuk=0):doluKoltuk(_doluKoltuk){}
  bool yerVar();
  void yerAyir(int n);
  void iptal(int a);
  int kalanKoltuk();
};
bool Seans::yerVar(){
  if (doluKoltuk<20) {
    return true;
  }
  else{
    return false;
  }
}
int Seans::kalanKoltuk(){
  return (20-doluKoltuk);
}
void Seans::yerAyir(int n){
  if(yerVar()&&(20-doluKoltuk)>n){
    doluKoltuk+=n;
    cout<<endl<<n<<" koltuk rezerve edildi."<<endl;
  }
  else{
    cout<<"Malesef o kadar yerimiz yok :("<<endl;
  }
}
void Seans::iptal(int a){
  if((doluKoltuk+a)<20)
  doluKoltuk+=a;
}
int main(){
  char sec;
  int x,koltukSay;
  cout<<"Lutfen asagidakilerden birini seciniz:"<<endl<<
  "R: Rezervasyon"<<endl<<
  "I: Iptal"<<endl<<
  "K: Kalan Koltuk Sayisi"<<endl<<
  "S: Son"<<endl;
  Seans Rez[3];
while(1){
  cout<<"Secenek:";
  cin>>sec;
  switch (sec) {
    case 'R':
    cout<<"Seans Saati (12,15,18):"; //12=>0,15=>1,18=>2
    cin>>x;
    cout<<endl<<"Koltuk Sayisi: ";
    cin>>koltukSay;
    switch (x) {
      case 12:
      Rez[0].yerAyir(koltukSay);
      break;
      case 15:
      Rez[1].yerAyir(koltukSay);
      break;
      case 18:
      Rez[2].yerAyir(koltukSay);
      break;
    }
    break;
    case 'I':
    cout<<"Hangi seanstan iptal edilecek?";
    cin>>x;
    cout<<endl<<"İptal edilecek koltuk sayisi:";
    cin>>koltukSay;
    switch (x) {
      case 12:
      Rez[0].iptal(koltukSay);
      break;
      case 15:
      Rez[1].iptal(koltukSay);
      break;
      case 18:
      Rez[2].iptal(koltukSay);
      break;
    }
    break;
    case 'K':
    cout<<endl<<"Seans saati (12,15,18):";
    cin>>x;
    switch (x) {
      case 12:
      cout<<endl<<Rez[0].kalanKoltuk()<<" koltuk reserve edilebilir."<<endl;
      break;
      case 15:
      cout<<Rez[1].kalanKoltuk()<<" koltuk reserve edilebilir."<<endl;
      break;
      case 18:
      cout<<Rez[2].kalanKoltuk()<<" koltuk reserve edilebilir."<<endl;
      break;
    }
    break;
    case 'S':
    cout<<"Programdan çıkış yapıyorsunuz... GULE GULE...";
    exit(0);
  }
}
}
