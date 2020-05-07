#include <iostream>
using namespace std;
class Enstruman{
public:
  string isim;
  virtual  void cal()=0; //string eser
};


class Keman:public Enstruman{
public:
  string isim="Keman";
  void cal();
};
void Keman::cal(){ //string eser
  cout<<isim<<" Caliyor"<<endl;
}
class Gitar:public Enstruman{
public:
  string isim="Gitar";
  void cal();
};
void Gitar::cal(){ //string eser
  cout<<isim<<" Caliyor"<<endl;
}
class Piyano:public Enstruman{
public:
  string isim="Piyano";
  void cal();
};
void Piyano::cal(){ // string eser
  cout<<isim<<" Caliyor"<<endl;
}
class Orkestra{
private:
    int i=0;
public:
      Enstruman* enstrumanlar[3];
      void EnstrumanEkle(Enstruman *e);
      void eserCal();
};
void Orkestra::EnstrumanEkle(Enstruman *e) {
    enstrumanlar[i++]=e;
}
void Orkestra::eserCal( ) {
    for (int k = 0; k < i; k++) {
        enstrumanlar[k]->cal();
    }
}
int main(){
Orkestra orkestra;
Keman keman;
Piyano piyano;
Gitar gitar;
orkestra.EnstrumanEkle(&keman);
orkestra.EnstrumanEkle(&piyano);
orkestra.EnstrumanEkle(&gitar);
orkestra.eserCal();
return 0;
}
