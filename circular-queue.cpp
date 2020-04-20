#include <iostream>
using namespace std;
#define MAX 10

class daireselKuyruk{
private:
  int dizi[MAX];
  int eSay,bas,son;
public:
  daireselKuyruk(){
		eSay=0;
		son=-1;
		bas=-1;
	};  //baslangicta bas ve sonun dizide olmayan eleman olması yeterli.
  bool ekle(int x);
  bool cikar(int &temp);
};

bool daireselKuyruk::ekle(int x){
  if(eSay>=MAX){return 0;} //dolyusa ekleme
  if(bas==-1){ bas++;cout<<endl<<"ilk eleman ekleniyor..."<<bas<<endl; } //kuyruğa ilk eleman eklenmesi, bas dizinin ilk indexi yani 0'i gösteriyor.
  if(son==MAX-1){ son=0;} //eğer kuyruk dizinin son elemanını gösteriyorsa dairesel olduğu için başa dönecek. burada bas ve kuyrugun cakismasi mümkün degildir.Cunku en basta eleman sayisini kontrol ederek bunu önledik.
  else {son++;}//eger sıranın ortalarındaysak son degerini arttırmak yeterli. Burası aslında ilk eleman eklenirkende calisiyor.
	cout<<endl<<"son degeri==>"<<son<<endl;
  //buraya kadar sadece bas ve son kisimlarinin yerleştirilmesiyle uğraştık.Eğer bu kısımlar tamam ise ekleme işlemine geçilebilir.Ekleme işlemi kuyruk sonu üzerinden yapılacağı için ilk önce kuyruk önü ve kuyruk basi yerleştirilmeleri yapılmalı.
  dizi[son]=x;
  eSay++;
		cout<<"eleman sayisi==>"<<eSay<<endl<<"Eklenen eleman==>"<<x<<endl;
  return true;
}
bool daireselKuyruk::cikar(int &temp){
  if(eSay==0){cout<<endl<<"Çıkarılacak eleman yok."<<endl;return false;}  //eğer eleman sayisi sıfır ise çıkarılacak eleman yoktur.
	temp=dizi[bas];
  if(bas==MAX-1){bas=0;} //eğer kuyruk bası sonuncu indexte ise onu 0. indexe alırsak listeyi bir adım öne götürüyoruz sanırım. masaüstü son adlı fotoyu burayı anlatırken kullan.
  else{bas++;} //kuyruk basi icerde bir yeri gosteriyor.
	if(eSay<=0){bas=-1;son=-1;}
	eSay--;
	cout<<endl<<"bas ve son==>"<<bas<<son<<endl;  //bas ve son eleman cikarildiktan sonra kontrol edilecek.!!
	return true;
}

int main(){
	daireselKuyruk dk;
dk.ekle(4);
dk.ekle(5);

for(int i=0;i<2;i++){
	int temp;
	dk.cikar(temp);
	cout<<temp<<endl;
}
}
