#include<iostream>
using namespace std;


int main(){
	int a, b;
	a=20; //10100
	cout<<a<<endl;
	b=a<<2; //1010000
	cout<<b<<endl;
	for(int i=0;i<20;i++){
		if(i&b){ 
			cout<<"I am in";
		}
	}
}



//1001 & 0101 = 0001 is not equal 1001 to it returns FALSE