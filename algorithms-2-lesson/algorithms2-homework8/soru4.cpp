#include <iostream>
#include <math.h>
using namespace std;
class NesneYoneticisi{
public:
  template<typename T>
  T* nesneYarat();
  template<typename T>
  void nesneYarat(T*& n);
};
template <typename T>
T* NesneYoneticisi::nesneYarat(){
  return(new t);
}
template<typename T>
void NesneYoneticisi::nesneYarat(T*& n){
  n=new T;
  cout<<"Yeni nesne atamasi yapildi..."<<endl;
}
class X{
public:
  x(){cout<<"X nesnesi yaratildi"<<endl;}
};
class Y{
public:
  Y(){cout<<"Y nesnesi yaratildi"<<endl;}
};
int main(){
  NesneYoneticisi ny;
  X* p1=ny.nesneYarat<X>();
  Y* p2=ny.nesneYarat<Y>();
  ny.nesneYarat(p1);
  ny.nesneYarat(p2);
  return 0;
}
