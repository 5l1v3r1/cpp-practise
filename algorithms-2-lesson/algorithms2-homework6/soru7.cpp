#include <iostream>
using namespace std;

  class A{
    int u,v;
  public:
    A(int _u,int _v):u(_u),v(_v){}
    void yaz();
  };
  void A::yaz(){
    cout<<u<<" "<<v<<endl;
  };

  class B{
    int y;
  public:
    B(int _y):y(_y){}
    void yaz();
  };
  void B::yaz(){
    cout<<" "<<y<<endl;
  }
  class C:public A, public B{
    int z;
  public:
    C(int _z,int _y, int _u, int _v):z(_z),A(_u,_v),B(_y){}
    void yaz();
  };
  void C::yaz(){
    cout<<z<<" "<<endl;
  }
int main(){
  C c(4,3,2,1);
  c.yaz();
  c.A::yaz();
  c.B::yaz();
}




