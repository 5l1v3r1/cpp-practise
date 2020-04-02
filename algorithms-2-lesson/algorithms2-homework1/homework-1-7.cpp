#include <iostream>
using namespace std;

int mod(int array[],int boyut);

int main(){
	int boyut;
	int *array;
	cout<<"Veri serisinin boyutunu giriniz:";
	cin>>boyut;
	array=new int[boyut];
	cout<<"Veri serisini giriniz:";
	for (int i = 0; i < boyut; i++){
		cin>>array[i];
	}

	cout<<"Mod:"<<mod(array,boyut)<<endl;
	
	return 0;
}
int mod(int array[],int boyut){
	int sayac=0;
	int mod,prevmod,prev=0;

for (int i = 0; i < 10; i++){
	sayac=0;
	for (int c = 0; c < boyut; c++){
		if(array[c]==i)
			sayac++;
			mod=i;
	}
	if(prev<sayac){
		prev=sayac;
		prevmod=mod;
	}
	else if(prev<=1 && sayac==1)
		prevmod=-1;
}
return prevmod;
}