#include <iostream>
using namespace std;
void takas(int *x,int *y){
  int t=*x;
  *x=*y;
  *y=t;
}
/* son eleman pivot olarak alinir, pivottan düsükler pivotun soluna pivottan yuksekler pivotun sagina yerlestirilir. */
int bolumleme(int dizi[], int dusuk, int yuksek){  //dusuk dizinin 0. indisi yuksek dizinin sonuncu indisi olacak.

  int pivot=dizi[yuksek]; //son eleman pivot olarak alindi.
  int i = (dusuk-1); //dusuk elemanin adresi // sagi solu diye ayrilmisti iste tam orada ikiye bölünen kısımdaki ortada kalan parçadan dolayı ilk durumda i=-1 olur??
  for(int j=dusuk;j<=(yuksek-1);j++){ //pivottan bir önecki elemana kadar dönecek. nedeni ise pivottan küçük olanları

    if(dizi[j]<=pivot){ //eğer dizinin dusuk elemani pivottan dusuk veya esit ise
      i++; // en küçük olan elemanı bir sonraki index yani 0. index yap
      takas(&dizi[i], &dizi[j]);  // en küçük eleman ile pivot yer değiştirir.
      //dikkat burada yüksek değişkeni o anki bölümlenen parçanın en düşük indeksi ve en büyük indeksi anlamına gelmektedir.!!!!
    }
  }
  takas(&dizi[i+1],&dizi[yuksek]); //pivot ortaya alındı!!!!
  return (i+1);
}
void hizliSirala(int dizi[], int dusuk, int yuksek)
{
	if (dusuk < yuksek)
	{
		int orta = bolumleme(dizi, dusuk, yuksek);
		hizliSirala(dizi, dusuk, orta - 1);
		hizliSirala(dizi, orta + 1, yuksek);
	}
}
int main(){
  int a[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(a)/sizeof(a[0]);
  hizliSirala(a, 0, n-1);
  for (int i = 0; i < n; i++) {
    cout<<a[i]<<endl;
  }
  return 0;
}
