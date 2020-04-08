#include <iostream>
using namespace std;
#define MAX 10
class Stack{
private:
  int D[MAX];
  int Top=0; //  sıradaki boş hücreyi gösteriyor.
public:
  //bool pop(int &item);
    //bool top(int &item); //yığına eklenen son elemanı çıkartmadan kopyasını getirir.
  bool push(int item);
  bool pop(); //  son eklenen elemanı yığından çıktır
  bool bosMu(); //boş mu değil mi?
  void yazdir();
};
bool Stack::bosMu(){
  if(Top<=0){
    return false;
  }
  else return true;
}
bool Stack::push(int item){ //eleman ekleyeceğiz ama,eğer top 10 ise yığın dolu demektir. o aman false döndür.
  if(Top>=MAX){return false;}
  else{
  D[Top]=item;
  Top++;
  cout<<endl<<"top degiskeni bir kez arttirildi ve degeri=>>"<<Top<<endl;
}
  return true;
}
bool Stack::pop(){ //yığından eleman çıkaracağız fakat ele man var mı ?
  if(Top<=0){return false;}
  else Top--;
  return true;
}
void Stack::yazdir(){
  for(int i=0;i<Top;i++)
  cout<<i+1<<". Eleman:"<<D[i]<<endl;;
}
int main(){
  Stack st;
st.push(3);
st.push(4);
st.push(5);
st.pop();
if(st.bosMu()){
  cout<<"Boş değil"<<endl;
}
else {cout<<"boş"<<endl;}
st.push(6);
st.push(7);
st.yazdir();
}
