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
    int paydaAl(){return payda;}
    bool operator>(Rasyonel&);
};
bool Rasyonel::operator>(Rasyonel &a1) {
    return ((float)pay/(float)payda>(float)a1.pay/(float)a1.payda);
}
int main(){}