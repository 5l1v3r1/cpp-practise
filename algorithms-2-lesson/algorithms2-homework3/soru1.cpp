#include<iostream>
#include<string>
using namespace std;

class Termometre{
private:
  float deger;
  string birim;
public:
  Termometre(){}
  Termometre(float _deger);
  Termometre(float _deger, string _birim):deger(_deger),birim(_birim){}
};
Termometre::Termometre(float _deger){
  deger=_deger;
}

int main(){
Termometre a = Termometre (23.2);

}
