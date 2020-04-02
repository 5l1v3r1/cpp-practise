#include <iostream>
using namespace std;
void sayiOku(float a[],int b);
void yazdir(float k[],int l);
float maksimumHesapla(float p[],int o);
int main(){
	float* g;
	int n;
	float ortalama, max, min;
	cout<<"Girmek istediğiniz sayi adedini giriniz:";
	cin>>n;
	g =new float[n];
	sayiOku(g,n);
	yazdir(g, n);
	cout<<"En buyuk sayi:"<<maksimumHesapla(g,n)<<endl;
	delete[] g;
	return 0;
}

	void sayiOku(float g[], int n){
	for(int i=0; i<n; i++){
	cout<<i+1<<". sayi:";
	cin>>g[i];
	}
	}

	void yazdir(float g[], int n){
	for(int i=0; i<n; i++){
	cout<<g[i]<<endl;
	}
	}

	float maksimumHesapla(float g[], int n ){
	float m=*g;
	for(int i=0; i<n;i++){
	if(g[i]>m){
	m=g[i];
	}
	}
	return m;
	}
