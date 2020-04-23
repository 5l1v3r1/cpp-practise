#include <iostream>
using namespace std;

class Ulke{
private:
  int telKod;
  long int nufus;
  string baskent, plaka, dil;
public:
  Ulke(){}
  Ulke(string bas, string pl){baskent=bas;plaka=pl;}
  Ulke(string bas){baskent=bas;}
  Ulke(long int nu){nufus=nu;}
  Ulke(string bas, string pl, string di){baskent=bas;plaka=pl;dil=di;}
  Ulke(int tel){telKod=tel;}
};

int main(){
  Ulke turkiye("Ankara", "TR");
  Ulke almanya;
  Ulke ingiltere("Londra");
  Ulke kosova(2000000);
  Ulke ispanya("Madrid", "E", "İspanyolca");
  Ulke estonya(372);

}
