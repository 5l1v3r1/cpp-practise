#include <iostream>
#include<array>
using namespace std;

void insSort(int dizi[],int n);
int main(){
  int dizi[] = { 6, 4, 15, 13, 9, 14};
  int n = sizeof(dizi) / sizeof(dizi[0]);
  insSort(dizi, n);
  for(int i=0;i<n;i++){
    cout<<dizi[i]<<endl;
  }
}
void insSort(int dizi[],int n){
  int x,y,gecici;
  for(x=1;x<n;x++){
    gecici=dizi[x];
    y=x;
    while(y>0&&dizi[y-1]>gecici){
      dizi[y]=dizi[y-1];
      y--;
    }
    dizi[y]=gecici;
  }
}
