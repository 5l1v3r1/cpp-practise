#include<iostream>
using namespace std;
class A{
protected:
  int x;
public:
  A(int _x):x(_x){}
  void f1();
  int f2(int y);
  friend void f3();
};
void A::f1(){
  x*=2;
  cout<<"1."<<x<<endl;
}
int A::f2(int y){
  x=x+y;
  cout<<"2."<<x<<endl;
  return x;
}
class B:public A{
public:
  B(int _x):A(_x){}
  void f1();
  int f2();
  void f3(int y);
};
void B::f1(){
  x*=4;
  cout<<"4."<<x<<endl;
}
int B::f2(){
  x=3*A::f2(2); //This is how derived or inherited classes can use in the procces.
  cout<<"5."<<x<<endl;
  return x;
}
void B::f3(int y){
  x=2*x+2*y;
  cout<<"6."<<x<<endl;
    }
void f3(int y){
  cout<<"3."<<y<<endl;
    }
int main(){
  A a(5);
  B b(3);
  a.f1();
  a.f2(2);
  f3(3);
  b.f1();
  b.f2();
  b.A::f2(2);
  b.f3(3);
  return 0;
}







