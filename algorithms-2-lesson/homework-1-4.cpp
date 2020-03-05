#include <iostream>
using namespace std;


	int degistir(int *x,int *y,int *z){
		int temp;
		temp=*x; //temp=10
		*x=*y; // x=30 y=30
		*y=temp; //	y=10
		temp=*y; //temp=10
		*y=*z;	//y=40 z=40
		*z=temp; //z=10
		return 0;
	}

int main(){
	int x = 10;
	int y = 30;
	int z = 40;
	degistir(&x,&y,&z);
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	return 0;
	}

