#include <iostream>
using namespace std;
class A{
public:
  A(){cout<<"1. A"<<endl;}
  ~A(){cout<<"2. ~A"<<endl;}
  virtual void f1();
  void f2();
};

void A::f1(){
  cout<<"3. A.f1()"<<endl;
}
void A::f2(){
  cout<<"4. A.f2()"<<endl;
}
class B: public A{
public: B(){cout<<"5. B"<<endl;}
  void f1();
  void f2();
};
void B::f1(){
  cout<<"6. B.f1()"<<endl;
}
void B::f2(){
  cout<<"7. B.f2()"<<endl;
}
int main(){
  A a;
  B b;
  A *aGosterge = new B;
  a.f1(); //3. A.f1()
  a.f2(); //4. A.f2()
  aGosterge->f1(); //6. B.f1()
  aGosterge->f2();//4. A.f2()
  delete aGosterge;// "A a;" silindi,"B b;" silindi, "new B;" silindi.
}
