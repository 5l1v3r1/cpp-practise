#include<iostream>
using namespace std;


int main(){
int value;
int *xptr; //we have to type "*" because it says that i am pointer and i will point somethink if you point any variable like "xptr=&value"

value=5;
xptr=&value; // means addres of value is equal to xptr, i mean when we call xptr it will point value and when we call xptr or value we will see same values

cout<<value<<" "<<xptr<<endl;  //output=value' value and the addres of value

*xptr=6; //see that it's points value and when we can change value with "*xptr"

cout<<value<<"  "<<xptr<<endl; //output=changed value(6) and the addres of value, if you compare both cout output you gonna realize that, the addres of value is same because we don't change addres of value

//xptr=33;
//cout<<value<<" "<<xptr; // we changed the value of xptr, the complier gives error that is callled invalid conversion 'int' to 'int'.

value=22;

cout<<value<<" "<<xptr;





}
