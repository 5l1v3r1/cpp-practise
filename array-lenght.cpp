#include <iostream>
using namespace std;
//sizeof kullanimi
int main(){
int dizi[10]={1,2,2,3,4,5,6};
int a=sizeof(dizi);
cout<<"a==>"<<a<<endl;
cout << "dizideki eleman sayisi==>>> " << sizeof(*dizi)<<endl;
}
