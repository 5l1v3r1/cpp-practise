#include<iostream>
using namespace std;

void x(int* a, int &b);

int main(){
int* a;
int b = 5;
a = &b;
cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
cout<<endl<<"*a="<<*a<<endl<<"b="<<b<<endl;
x(a,b);

int &c =b;

cout<<endl<<"c="<<c<<endl;
c=3;
cout<<endl<<"c="<<c<<endl<<"b="<<b<<endl
;
}


void x(int* a, int &b){
cout<<endl<<"*a="<<*a<<endl<<"b="<<b<<endl;
}
