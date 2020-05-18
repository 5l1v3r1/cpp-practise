#include <iostream>
using namespace std;
template <class T>
void f(T &a, T &b){
  T temp;
  temp=a;
  a=b;
  b=temp;
}
int main(){
  int a=5,b=7;
  float x=12.3, y=45.3;
  char ch1='a', ch2='b';
  cout<<"a:"<<a<<" b:"<<b<<endl;
  f(a,b);
  cout<<"a:"<<a<<" b:"<<b<<endl;
  cout<<endl;
  cout<<"x:"<<x<<" y:"<<y<<endl;
  f(x,y);
  cout<<"x:"<<x<<" y:"<<y<<endl;
  cout<<endl;
  cout<<"ch1:"<<ch1<<" ch2:"<<ch2<<endl;
  f(ch1,ch2);
  cout<<"ch1:"<<ch1<<" ch2:"<<ch2<<endl;
  return 0;
}
