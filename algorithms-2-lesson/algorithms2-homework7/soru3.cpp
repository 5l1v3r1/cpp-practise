#include <iostream>
using namespace std;
class Bir{
protected:
  int a;
public:
  Bir(int _a=0):a(_a){}
  virtual ~Bir(){cout<<"One Destructor"<<endl;}
  void f1();
  virtual void f2();
};
void Bir::f1(){
  a+=2;
}
void Bir::f2(){
  cout<<a<<endl;
}
class Iki: public Bir{
  int b;
  int *c;
public:
  Iki(int _b,int* _c):b(_b),c(_c){}
  void f1();
  virtual void f2();
  virtual ~Iki(){
    delete c;
    cout<<"Two destructor"<<endl;
  }
};
void Iki::f1(){
  b+=2;
  *c+=1;
}
void Iki::f2(){
  cout<<a<<" "<<b<<" "<<*c<<endl;
}
int main(){
  int a,b;
  int* c;
  cin>>a;
  cin>>b;
  c=new int(b);
  Bir *p[2];
  Iki obj(b,c);
  p[0]= new Bir(a);
  p[1]=new Iki(b,c);
  obj.f1(); //!
  obj.f2();//!
  for(int i=0;i<2;i++){
    p[i]->f1();
    p[i]->f2();
  }
  delete p[0];
  delete p[1];
  return 0;
    }
