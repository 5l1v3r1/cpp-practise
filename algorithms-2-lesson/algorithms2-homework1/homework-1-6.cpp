#include <iostream>
using namespace std;

int main(){
	int boyut;
	float *array;
	float kilo;
	cout<<"Diyet programinizin suresini giriniz (hafta sayisi): ";
	cin>>boyut;
	array=new float[boyut];
	for (int i = 0; i < boyut; i++){
		cout<<endl<<i+1<<".hafta kilonuz:";
		cin>>array[i];
	}
	kilo=array[0]-array[boyut-1];
	delete array;
	if(kilo>0)
		cout<<"Bu diyet programı ile toplam "<<kilo<<" kilo kaybettiniz."<<endl;
	else if(kilo==0)
		cout<<"Bu diyet programı ile kilo veremediniz."<<endl;
	else
		cout<<"Bu diyet programı ile "<<abs(kilo)<<" kilo aldınız."<<endl;
}
