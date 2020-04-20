#include <iostream>
using namespace std;
class A{
    int x;
    const int y;
public:
    A(int _y):y(_y){}
    int yAl() const;
    int xAl() const;
    void xAta(int x);
};
// a. Yanlış
//int A::xAl() const {
//    return x++;
//}
//b. Doğru
void A::xAta(int _x) {
    const int x=_x;
}
//c. Doğru
int A::yAl() const {
    return y;
}
//d. Yanlış
//void A::yAta(int _y) const{
//    y=_y;
//}
int main() {return 0;}
