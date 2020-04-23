//
// Created by mert on 23.04.2020.
//
#include "iostream"
using namespace std;
class Rasyonel{
    int pay;
    int payda;
public:
    Rasyonel(int _pay, int _payda):pay(_pay),payda(_payda){}
    int payAl(){return pay;}
    int paydaAl(){return payda;};
    friend bool operator>(Rasyonel&,Rasyonel&);
};
bool operator>(Rasyonel &a1 ,Rasyonel &a2) {
    return ((float)a1.pay/(float)a1.payda>(float)a2.pay/(float)a2.payda);
}
int main(){}