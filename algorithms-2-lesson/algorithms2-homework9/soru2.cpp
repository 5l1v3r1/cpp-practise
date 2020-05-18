//
// Created by mertdot on 5/17/20.
//
#include "iostream"
using namespace std;
/*
void f(int x) throw(const char*){
  throw "test";
  }

void f(int x) throw(const int){
  throw 5;
}
void f(){throw "hata";}
class Hata: public exception{
public:
  virtual const char* what() const throw(){
    return "Hata";
  }
}hata;
void f(){
  throw hata;
  }
void f(){
  throw -4;
  }
*/
void f(int x){
  if(x==0)
    throw 0;
  if(x<0)
    throw "Negatif";
}
int main(){
  try{
    f(-4);
  }
  catch(const int x){cout<<x<<endl;}
  catch(const char* x){cout<<x<<endl;}
  return 0;
}
