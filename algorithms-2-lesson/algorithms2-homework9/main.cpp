#include <iostream>
using namespace std;
void f3(int x){
    if(x%2!=0)
        throw "Cift sayi degil";
}
void f2(int x){
    try {
        if (x>0)
            f3(x);
        else
            throw -3;
    } catch (const char* str) {
        cout<<"f2:"<<str<<endl;
    }
}
void f1(int x){
    try {
        f2(x);  //f2'nin attığı throw kendi içerisindeki catch'de uyuşmadığı için buradaki catch yakalayacak!!!!
    } catch (const int i) {
        cout<<"f1:Hata kodu:"<<i<<endl;//1. satirda bu yazar.!!!
    }catch(const char* str){
        cout<<"f1:"<<str<<endl;
    }
}
int main() {
    f1(-5);
    f1(7);
    f1(8);
    return 0;
}
