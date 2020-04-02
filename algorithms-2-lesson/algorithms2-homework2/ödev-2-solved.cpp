// #include "iostream"
// using namespace std;
//
// //object described.
// class a {
//   public: //access everywhere.
//       int y=5;
//       int f2();
//   private: //access only inside of class.
//     int f1();
//     int x=3;
// };
//
//
// int main() {
// a b; //object created.
// cout<<b.y<<'\n';
// b.f2();
//
// return 0;
// }

//
// #include "iostream"
// using namespace std;
// class A {
//   int f1();
//     public:
//       int x;
//       int y;
//       int f2();
//       void xAta(int x);
// };
//   int A:: f1(){
//     return 2*x*y;
//   }
//   int A:: f2(){
//     f1();
//     return x*x+y*y;
//   }
//   void A:: xAta(int _x){
//     x = _x;
//   }
// int main(){
//   A a[3];
//   int x,y;
//   cout<<"x*x+2*x*y+y*y = ?"<<endl;
//   for(int i=0; i<3;i++){
//     a[i].x = i*2+1;
//     a[i].y = i+2;
//   }
//   for(int i=0;i<3;i++){
//     x = a[i].x;
//     y = a[i].y;
//     cout<<x<<"*"<<x<<"+2*"<<x<<"*"<<y<<"+"<<y<<"*"<<y<<"="<<a[i].f2()<<endl;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int a = 3;
// class Test{
//   int b,c;
//     public:
//       void atama(int,int);
//       int fon(int&, int=8);
// };
// void Test::atama(int d,int e){
//   b = d;
//   c = e;
//   a += 5;
// }
// int Test::fon(int& f, int g){
//   f *= 3;
//   g *= 4;
//   b += 2;
//   c += 3;
//   cout<<f<<" "<<g<<endl;
//   return f+g;
// }
//
// int main(){
//     int h=5, i=6;
//     Test nsn1, nsn2;
//     nsn1.atama(1,3);
//     nsn2.atama(2,4);
//     a=nsn1.fon(h,i);
//     cout<<h<<" "<<i<<" "<<a<<endl;
//     i=nsn2.fon(h);
//     cout<<h<<" "<<i<<" "<<a<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Saat{
//   int saat, dakika;
//     public:
//       void basla(int,int);
//       void arttir();
//       void goster();
// };
// void Saat::basla(int s=12,int d=0){
//   saat=s;
//   dakika=d;
// }
// void Saat::arttir(){
//   if(dakika<59)
//   dakika++;
//     else{
//       dakika=0;
//         if(saat<23)
//           saat++;
//         else{
//               saat=0;
//     }
//   }
// }
// void Saat::goster(){
//   if(saat==0)
//   cout<<"00:";
//   else
//   cout<<saat<<":";
//   if(dakika==0)
//   cout<<"00"<<endl;
//   else if(dakika<10)
//   cout<<"0"<<dakika<<endl;
//   else
//   cout<<dakika<<endl;
// }
// int main(){
//   Saat s;
//   s.basla(14,55);
//   cout<<"Saat:";
//   s.goster();
//   cout<<"10 dakika boyunca:"<<endl;
//   for(int i=1;i<=10;i++){
//     s.goster();
//     s.arttir();
//   }
//   return 0;
// }

// #include<iostream>
// #define p 3.14159265359
// using namespace std;
//
// class Silindir{
// private:
//   int yukseklik; //Kullanılması için erişimci fonksiyon gerekli fakat soruda belirtilmemiş.
//   int tabanYaricapi;  //Kullanılması için erişimci fonksiyon gerekli fakat soruda belirtilmemiş.
// public:
//   double yuzeyAlaniHesapla(int,int);
//   double  hacimHesapla(int,int);
// };
// double Silindir::yuzeyAlaniHesapla(int tabanYaricapi,int yukseklik){
//   return 2*p*tabanYaricapi*tabanYaricapi+2*p*tabanYaricapi*tabanYaricapi;
// }
// double Silindir::hacimHesapla(int tabanYaricapi,int yukseklik){
//   return p*tabanYaricapi*tabanYaricapi*yukseklik;
// }
// int main(){
//   Silindir slndr;
//   int r,h;
//   cout<<"Yukseklik (h) :";
//   cin>>h;
//   cout<<"Taban yaricapi (r) :";
//   cin>>r;
//   cout<<"Yuzey Alani (A):"<<slndr.yuzeyAlaniHesapla(r,h)<<endl<<"Hacmi (H):"<<slndr.hacimHesapla(r,h);
// }

// #include <iostream>
// #include <string>
// using namespace std;
//
// class YerlesimBirimi{
// private:
//   string yerIsim;
//   double nufus,dogSay,olSay;
// public:
//   void isimAta();
//   void nufusAta();
//   void dogumAta();
//   void olumAta();
//   void olOrBul();
//   void dogOrBul();
// };
//
// void YerlesimBirimi::isimAta(){
//   cout<<"Yerlesim Biriminin ismini giriniz:";
//   cin>>yerIsim;
// }
// void YerlesimBirimi::nufusAta(){
//   cout<<"Nufusu giriniz:";
//   cin>>nufus;
// }
// void YerlesimBirimi::dogumAta(){
//   cout<<"Dogum sayisini giriniz:";
//   cin>>dogSay;
// }
// void YerlesimBirimi::olumAta(){
//   cout<<"Olum sayisini giriniz:";
//   cin>>olSay;
// }
// void YerlesimBirimi::olOrBul(){
//   cout<<yerIsim<<" --- "<<" Olum Orani: "<<olSay/nufus<<endl;
// }
// void YerlesimBirimi::dogOrBul(){
// cout<<yerIsim<<" --- "<<" Dogum Orani: "<<dogSay/nufus<<endl;
// }
//
//
// int main(){
// YerlesimBirimi f;
// for(int i=0;i<2;i++){
//   f.isimAta();
//   f.nufusAta();
//   f.dogumAta();
//   f.olumAta();
//   f.dogOrBul();
//   f.olOrBul();
// }
// }

// #include<iostream>
// using namespace std;
//
// class KolaMakinesi{
// private:
//   double fiyat;
//   int kolaSay;
// public:
//   void ilkYukleme(int, double);
//   void kolaVerme();
//   void goster();
// };
//
// void KolaMakinesi::ilkYukleme(int say=100,double fiy=2.5){
//   fiyat=fiy;
//   kolaSay=say;
// }
// void KolaMakinesi::kolaVerme(){
//   double para;
//   cout<<"Kolanin fiyati: 2.5 lira."<<endl<<"Odemeniz: ";
//   cin>>para;
//   if(para>fiyat){
//     cout<<"Kolaniz veriliyor."<<endl;
//     para-=fiyat;
//     if(para==0.5)
//       para=50;
//     kolaSay--;
//     cout<<"Para ustunuz: "<<para<<" kurus"<<endl;
// }
// }
// void KolaMakinesi::goster(){
//   cout<<"Son durum:"<<endl<<
//   "\tKolanin fiyati: "<<fiyat<<" lira."<<endl<<
//   "\tKalan Kola sayisi: "<<kolaSay<<endl;
// }
//
// int main(){
//   KolaMakinesi KolaMakinesi;
//   KolaMakinesi.ilkYukleme();
//   KolaMakinesi.kolaVerme();
//   KolaMakinesi.goster();
//   return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
//
// class Para{
// private:
//   double liraDegeri;
//   int elli, yirmiBes, on, bes, bir;
// public:
//   void liraAta(double);
//   void donustur();
//   void yaz();
// };
//
// void Para::liraAta(double deger){
//   liraDegeri=deger;
// }
// void Para::donustur(){
//   double kalan;
//   elli = liraDegeri/0.50;
//   kalan = fmod(liraDegeri,0.50);
//   yirmiBes = kalan/0.25;
//   kalan = fmod(kalan,0.25);
//   on = kalan/0.1;
//   kalan = fmod(kalan,0.1);
//   bes = kalan/0.05;
//   kalan = fmod(kalan,0.05);
//   bir = kalan/0.01;
//   kalan = fmod(kalan,0.01);
// }
// void Para::yaz(){
//   cout<<liraDegeri<<" lira:"<<endl<<"\t"<<
//   elli<<" 50 kurus,"<<endl<<"\t"<<
//   yirmiBes<<" 25 kurus,"<<endl<<"\t"<<
//   on<<" 10 kurus,"<<endl<<"\t"<<
//   bes<<" 5 kurus,"<<endl<<"\t"<<
//   bir<<" 1 kurus"<<endl;
// }
//
// int main(){
// Para abc;
// double lira;
// cout<<"Para miktarini lira olarak giriniz: ";
// cin>>lira;
// abc.liraAta(lira);
// abc.donustur();
// abc.yaz();
// return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
//
// class Telsiz{
// private:
//   double kanal;
// public:
//   int ses;
//   void ac();
//   void kapa();
//   void sesAyarla(int);
//   void kanalAyarla(double);
//   void ledGoster();
//   void konus(string);
//   string dinle();
// };
//
// void Telsiz::ac(){
//   ses=1;
// }
// void Telsiz::sesAyarla(int sev){
//   ses=sev;
// }
// void Telsiz::kanalAyarla(double kan){
//   kanal=kan;
// }
// void Telsiz::konus(string veri){
//   cout<<veri<<endl;
// }
// string Telsiz::dinle(){
//   string mesj;
//   getline(cin,mesj);
//   return mesj;
// }
// void Telsiz::kapa(){
//   ses=0;
// }
//
// void Telsiz::ledGoster(){
//   cout<<"Kirmizi LED yaniyor..."<<endl;
// }
//
// int main() {
//   Telsiz telsiz;
//   telsiz.ac();
//   telsiz.sesAyarla(10);
//   telsiz.kanalAyarla(32.4);
//   telsiz.konus("Trafik kazasi var, yardim gonderin...");
//   telsiz.ledGoster();
//   string mesaj = telsiz.dinle();
//   cout<<">>>> Gelen mesaj:"<<mesaj<<endl;
//   telsiz.konus("Tamam...");
//   telsiz.kapa();
//   cout<<"Ses seviyesi:"<<telsiz.ses<<endl;
//   return 0;
// }
