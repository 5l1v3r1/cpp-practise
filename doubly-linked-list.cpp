#include <iostream>
using namespace std;

class hucre{
public:
  int veri;
  hucre( int veri ){ this->veri=veri; onceki=NULL;sonraki=NULL;}   //  constructor yani yapıcı fonksiyon tanımlandı.
  hucre* onceki;
  hucre* sonraki;
};

class liste{
public:
  liste(){bas = NULL;}    //  constructor yani yapıcı fonksiyon tanımlandı.
  hucre* bas;

  // Ekleme,Silme,Gösterme
  void sonaEkle( int veri );
  void arayaEkle( int veri, int index );
  void sil(int deger);
  void goster();
};

void liste::sonaEkle( int veri ){
  hucre* hucre1 = new hucre(veri); //new ile oluşturmamızın sebebi açıklanacak!!

  if(!bas){  // listede hiç eleman olmayabilirdi.Bu nedenle baş hücre yeni oluşturulan hücre olması yeterli.
    bas = hucre1;
    return;
  }

  hucre* gecici = bas;

  while(bas->sonraki != NULL ){     //  son eleman bulundu.
    bas = bas-> sonraki;
  }
  bas->sonraki = hucre1;  //2.bağ kuruldu.
  hucre1->onceki=bas;     //1.bağ kuruldu.
  bas = gecici; //bas hücresi eski değerine atandı!
}

void liste::arayaEkle( int veri, int index ){
  if (index >0 ) {
    if(index<2){
      index+=2;
    }
    if(index==2){ index++; }
  hucre* hucre1 = new hucre(veri);

  if(!bas){             // listede hiç eleman olamamasına rağmen kullanıcı değer eklemeye kalkabilir.Bundan dolayı kontrol edildi.
    bas = hucre1;
    return;
  }

  hucre* gecici = bas;

  for(int i=0;i<index-2;i++){ // eklenilecek yerin bir önceki hücresi bulundu.
    bas = bas->sonraki;
  }
  bas->sonraki->onceki=hucre1; // bağ 1 kuruldu.
  hucre1->sonraki= bas->sonraki; //bağ 2 kuruldu.
  bas->sonraki=hucre1;         // bağ 3 kuruldu.
  hucre1->onceki=bas;         // bağ 4 kuruldu.
  bas=gecici;
}
else{cout<<"Negatif bir sıra olamaz!!"<<endl;}
}

void liste::sil( int deger ){ //ÇALIŞIYOR!!!                // iki türlü eleman çıkarabilirim.Ben sıraya göre yapacağım ama elemana görede yapılabilir.
    hucre* gecici = bas;
    while( gecici != NULL && gecici->veri != deger){  //aradığımız değer bulunana kadar döngü dönecek ama elemanın bulunmama olasılığı unutmuyoruz bu nedenle kontrol yerleştirdik.
      gecici=gecici->sonraki;
    }
    if(gecici==NULL){ //gecici degeri aradığımız veriyi içeren hücrenin adresini saklıyor.
      cout<<"HATA:Aranan değere ait hücre bulunamadı lütfen silmeye çalıştığınız değerin listede olduğundan emin olun."<<endl;
      return;
    }
    if(gecici->onceki){  // gecici degerin öncekisi null degil ise girecek yani ilk hücreyi silmeyeceğimizi anlıyoruz.Son hücre olursa sorun yok.
      gecici->onceki->sonraki = gecici->sonraki;  //1. bağ kuruldu.
    }
    else{ //eğer siliceğimiz hücre ilk hücreyse bas adlı pointerı yeni başa atamalıyız.
      bas = gecici->sonraki;
      bas->onceki=NULL;  //bas atandı fakat basın önceki adlı değişkeni hala bağları koparılan adresi tutuyor.Bu nedenle basın onceki degeri null yapılır.
    }
    if(gecici->sonraki){ //son hücre olmayacağını anlıyoruz çünkü gecici'nin sonrakisi null'sa sonuncu elemandır ve tek satırda bağlar kopar.
      gecici->sonraki->onceki = gecici->onceki;
    }
    delete gecici;
}

void liste::goster(){
  hucre* gecici = bas;
  while(gecici!=NULL){
    cout<<gecici->veri<<endl;
    gecici=gecici->sonraki;
  }
}

void menu(){
  cout<<"Merhaba Ben ikili bağli liste Yapmamı istediğin şeyleri söyleyebilirsin. :)"<<endl<<"Hadi bir çift bağlı liste oluşturalım."<<endl;
  liste liste1;
  while(1){
  int ekran,x,y;
  cout<<"1- Listenin Sonuna Eleman EKLE"<<endl
  <<"2- Listenin Herhangi bir yerine Eleman EKLE"<<endl
  <<"3- Listeden istediğin elemanı SİL"<<endl
  <<"4- Listeyi GOSTER"<<endl
  <<"5- CIK"<<endl<<"Cevabın:";
  cin>>ekran;
  switch (ekran) {
    case 1:
    cout<<"Eklemek istediğiniz elemanı giriniz:"<<endl;
    cin>>x;
    liste1.sonaEkle(x);
    break;
    case 2:
    cout<<"Eklemek istenen elemani giriniz:"<<endl;
    cin>>x;
    cout<<"Eklemek istediginiz elemanin kacinci eleman olucagini giriniz:";
    cin>>y;
    liste1.arayaEkle(x,y);
    break;
    case 3:
    cout<<"Silmek istedigin elemani giriniz:"<<endl;
    cin>>x;
    liste1.sil(x);
    cout<<x<<" elemani basariyla silindi."<<endl;
    break;

    case 4:
    cout<<"Listenin Elemanları;"<<endl;
    liste1.goster();
    break;

    case 5:
    cout<<"GULE GULE..."<<endl;
    exit(0);
  }
  }
}
int main(){
  menu();
}
