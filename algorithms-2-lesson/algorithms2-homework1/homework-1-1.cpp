#include <iostream>
using namespace std;


int main(){
int dizi[5];
int *gosterge;
//cout<<gosterge<<endl;
gosterge=dizi; //!!!!arrays acting like, we typed '&' before the array name i mean,when we type array name as we see dizi. it is naturally equal to addres of array.
//cout<<gosterge<<endl;

*gosterge=5; //we can reach array like this.

for (int i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;

gosterge++; //this is using for if we want to change cursor location.

for (int  i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;


*gosterge = 15;  //this will change dizi[1] becuase 'gosterge++' changes where located cursor is.
for (int  i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;


gosterge = &dizi[2]; //cursor is located at dizi[2]

for (int  i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;


*gosterge = 20; // mean is dizi[2]=20
for (int  i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;

gosterge = dizi + 3; // means dizi[3]
for (int  i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;

*gosterge= 25; //dizi[3]=25
for (int  i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;



gosterge = dizi; //it changed cursor to dizi[0]
for (int  i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
cout<<endl;




*(gosterge+4) = 30; //it changed dizi[0] to dizi[4]

for (size_t i = 0; i < 5; i++)
  cout <<dizi[i]<<" ";
  cout<<endl;
  return 0;

}
