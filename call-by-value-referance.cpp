#include <iostream>
using namespace std;
 void referance(int x,int &y){
    cout<<"Now, we will try what kind of result can we get when use parameter as a referance?"<<endl<<"lets get started"<<endl;
    cout<<"firtsly i am giving 1 to x and i have 2 to y"<<endl;
    x=1;
    y=2;
    cout<<"x=>"<<x<<" "<<"y=>"<<y<<endl;
 }
int main(){
    int deger;
    int a=3,b=4;
    cout<<"Hi, i am computer."<<endl<<"i want to show you what is the difference between call by referance and call by value :)"<<endl;
    cout<<"firstly,you will see the call by referance parameter"<<endl;
    cout<<"now, i am calling referance parameter for x is 3 and for y is 4"<<endl;
    referance(a,b);
    cout<<"you saw function values,now you see main function values"<<endl<<"a=>"<<a<<" "<<"b=>"<<b<<endl;
    cout<<"Can you see?"<<endl<<"what do you think?"<<endl<<"do you want to keep going to call by value parameter?(1) or do you want to see again?(0)"<<"(1 or 0)";
    cin>> deger;
    if(deger==0){
        cout<<"okey,lets try it again=>>"<<endl;
        cout<<"Hi,i am function :)."<<endl<<"now, i am calling referance parameter for x is 3 and for y is 4 --->"<<"look at this -->>"<<endl;
        referance(a,b);
        }
    else{
        cout<<"time to go!!"<<"You are brilliant!"<<endl;
        cout<<"if we used to call by value we can get the values what we assign in the function."<<endl<<"Look at call by value parameters."<<endl;
        cout<<"in main function "<<"x=> 1 "<<"y=> 2"<<endl<<"in referance function "<<"a=>3 "<<"b=>4"<<endl;
        cout<<"Yes,We are done.Time to another information to achieve more information. :)";
    }    
    }
