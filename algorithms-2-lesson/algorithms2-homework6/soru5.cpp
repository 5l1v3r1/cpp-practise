#include <iostream>
using namespace std;
class Bir{
  int k;
public:
  Bir(int l=4);
  int fon1(){
    k*=3;
    return k;
  }
  int fon2(){
      fon1();
      return k;
}
};
Bir::Bir(int l){
  k=l;
}
class Iki:public Bir{
  int m;
public:
  Iki(int n=6){m=n;}
  int fon1(){m*=4;return m;}
  int fon3(){return m;}
};
int main(){
  Bir nsn1(5);
  Iki nsn2;
  cout<<nsn2.fon1()<<endl;
  cout<<nsn0.Bir::fon1()<<endl;
  cout<<nsn1.fon2()<<endl;
  cout<<nsn2.fon2()<<endl;
  cout<<nsn2.fon3()<<endl;
  return 0;
}
