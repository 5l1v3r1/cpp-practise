//
// Created by mert on 6.05.2020.
//
#include "iostream"
using namespace std;

class Oyun{
public:
    string isim;
    virtual void oyna()=0;
};

class Mario: public Oyun{
public:
    string isim="Mario";
    virtual void oyna();
};
void Mario::oyna() {
    cout<<isim<<" Oynaniyor..."<<endl;
}

class Bloklar{
public:
    string isim="Bloklar";
    void bloklarOyna();
};
void Bloklar::bloklarOyna() {
    cout<<isim<<" oynaniyor..."<<endl;
}

/*Crack*/
class Crack: public Oyun,Bloklar{
public:
    string isim;
    void oyna();
};
void Crack::oyna() {
    Bloklar::bloklarOyna();
}
/*Crack*/

class Tetris: public Oyun{
public:
    string isim="Tetris";
    void oyna();
};
void Tetris::oyna() {
    cout<<isim<<" Oynaniyor..."<<endl;
}

class OyunKonsolu{
public:
    static int x;
    Oyun* oyun[3];
    void basla();
    void bitir();
    void oyunAta(Oyun* oyun);
};

void OyunKonsolu::oyunAta(Oyun* oy) {
oyun[x]=oy;
x++;
}

void OyunKonsolu::basla() {
    oyun[x-1]->oyna();
}
int OyunKonsolu::x=0;        /*Önemli*/
int main(){
OyunKonsolu konsol;
Mario mario;
Tetris tetris;
Crack* blok= new Crack;
konsol.oyunAta(&mario);
konsol.basla();
konsol.oyunAta(&tetris);
konsol.basla();
konsol.oyunAta(blok);
konsol.basla();
}
