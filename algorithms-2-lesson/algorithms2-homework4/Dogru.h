//
// Created by mert on 12.04.2020.
//

#ifndef CEVAPLAR_DOGRU_H
#define CEVAPLAR_DOGRU_H

#include "Nokta.h"
class Dogru{
private:
    float x,y;
public:
    Dogru(float _x,float _y):x(_x),y(_y){}
    float egim(float x,float y);
    Nokta kesisim(Dogru &dogru);
};
float Dogru::egim(float x, float y) {

}
#endif //CEVAPLAR_DOGRU_H
