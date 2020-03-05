#include <iostream>
using namespace std;

void degistir(int array[],int boyut){
for (int i = 1; i < boyut-1; i++)
	array[i-1]=array[i];
}

int main(){
	int boyut;
	int *array;
	cout<<"Dizinin boyutunu giriniz:";
	cin>>boyut;
	array=new int[boyut];
	cout<<"Dizinin elemanlarını giriniz:";
	for(int i=0;i<boyut;i++)
		cin>>array[i];
	degistir(array,boyut);
	cout<<"Dizinin ilk ve son elemansız kopyasi: ";
	for(int i=0;i<boyut-2;i++)
		cout<<array[i]<<" ";
	return 0;
	}

