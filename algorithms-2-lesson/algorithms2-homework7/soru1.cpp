#include <iostream>
using namespace std;
class A{
  int x;
public:
  A(int _x=0):x(_x){};
  int xAl(){return x;}
  virtual void f()=0;
};
class B:public A{
public:
  virtual void f()=0;
};
class C:public A{
public:
  void f();
};
void C::f(){
  cout<<xAl()<<endl;
}
class D: public B{
public:
  void f();
};
void D::f(){
  cout<<xAl()<<endl;
}
int main(){
  C c;
  D d;
  A* a = &d;
  a = &c;
  a->f();
}
