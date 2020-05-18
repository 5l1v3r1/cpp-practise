#include <iostream>
using namespace std;

template<class T1,class T2>
void f(T1,T2){
  cout<<"void(T1,T2)"<<endl;
}
template<class T>
void f(T,T){
  cout<<"void(T,T)"<<endl;
}
template<class T>
void f(T*,T*){
  cout<<"f(T*,T*)";
}

int main(){
	int x;
	double y;
	f(&x,&x);
	f(y,&x);
}
