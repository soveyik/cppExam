#include<iostream>
#include <string>

using namespace std;

class Kisi{
    private:
    string adi;
    string soyadi;
    
    public:
    static int nesneSayisi;
    
    Kisi(){
        cout << "parametresiz kurucu yapıcı çağırıldı."<<endl;
        adi = "bilgi yok";
        soyadi = "bilgi yok";
        Kisi::nesneSayisi++;
    }
    
    string yazdir(){
        return adi+ " " +soyadi;
    }
    
    ~Kisi(){
          cout<<"nesne siliniyor"<< endl;
    }
};

int Kisi:: nesneSayisi = 0;


int main(){
    int n;
    cout<<"kaç kişi eklemek istiyorsunuz?:"<<endl;
    cin>> n ;
    
    Kisi *kisiler = new Kisi[n]();
    
    for(int i = 0; i<n; i++){
        string ad ,soyad;
        cout<<"Kişinin adını ve soyadını giriniz:";
        cin>> ad >> soyad;
        kisiler[i] = Kisi(ad, soyad);
    }
    
    cout<<"Eklenen kişilerin listesi" <<endl;
    
    for(int i = 0; i<n ; ++i){
        cout <<kisiler[i].yazdir()<<endl;
    }
    
    delete[] kisiler;
    
    cout<<  "kopya sayısı: " <<Kisi::nesneSayisi << endl;
    
    return 0;
}






















