#include <iostream>
using namespace std;

int main() {

  int a = 29;
  int b = 25;
  int *x;
  int *y;
  x=&a;
  y=&b;
  //cout<<a<<" "<<b<<endl<<x<<" "<<y<<endl;
  *x = *y + 3; //x=28,a=28
  *y = *x + 2; //y=30,b=30
  cout<<"x:"<<x<<endl; // this is which memory adrress it stores.
  cout<<"*x:"<<*x<<endl; // this is value of where is points
  cout<<"&x:"<<&x<<endl; // this is own address

  cout<<"y:"<<y<<endl; // this is which memory adrress it stores.
  cout<<"*y:"<<*y<<endl; // this is value of where is points
  cout<<"&y:"<<&y<<endl; // this is own address


  cout<<endl<<"Last situation of the values and variables"<<endl;
  cout<<a<<" "<<b<<" "<<x<<" "<<y<<" ";

  return 0;
}
