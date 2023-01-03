
#include <iostream>
#include <chrono>
using namespace std;


struct ArrayList {
    int* bas; 
    void olustur(); 
    void ekle(int YeniDeger, int EklenecekIndex); 
    void guncelle(int GuncelDeger, int GuncelenecekIndex);
    void sil(int SilinecekIndex); 
    void yazdir(); 
    void bosalt(); 
    int sayac; 
};




    struct Node {
        int deger; 
        Node* sonraki; 
    };
    struct LinkedList {
        Node* bas; 
        void olustur(); 
        void ekle(int , int ); 
        void guncelle(int , int);
        void sil(int); 
        void yazdir(); 
        void bosalt(); 
        int sayac; 
    };

int main()
{
    ArrayList al;
    
    

    int a;
    int b;


    cout << "Eklemek istediginiz degeri giriniz ";
    cin >> a;

    cout << "Eklemek istediginiz index degerini giriniz ";
    cin >> b;
    al.ekle(a,b);

  int x, y;

    cout << "Yeni  degeri giriniz ";
    cin >> x;

    cout << "Güncellemek istediginiz index degerini giriniz ";
    cin >> y;
    
    cout << endl;

    cout << endl;
    auto begin = std::chrono::high_resolution_clock::now();
    al.guncelle(x, y);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
    cout << endl;
    cout << "Guncelleme suresi => " << elapsed.count() << " mikro-saniye" << endl;
    
    
    int t;

    cout << "Silinecek  degeri giriniz ";
    cin >> t;

    al.sil(t);
    



}
void ArrayList:: olustur() {
    sayac = 0;
    bas = new int[sayac];
}

void ArrayList:: bosalt() {

    delete bas;
    sayac = 0;

}

void ArrayList::yazdir() {
    

    int arr[100];

    for (int i = 0; i < 99; i++)
    {
        arr[i] = i;
    }

    cout << "Oluşturulan dizi:" << endl;
    for (int i = 0; i < 99; i++)
        cout << arr[i] << " ";
    cout << endl;

}

void ArrayList::sil(int SilinecekIndex) {
    int arr[10];
    for (int i = 0; i < 9; i++)

        arr[i] = i;

    cout << "Baslangic dizisi:" << endl;
    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = SilinecekIndex; i < 9; i++)
        arr[i] = arr[i + 1];

    cout << "Yeni dizi:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
}

void ArrayList::guncelle(int GuncelDeger, int GuncelenecekIndex) {
    int arr[10];
    for (int i = 0; i < 9; i++)

        arr[i] = i;

    cout << "Baslangic dizisi:" << endl;
    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 9; i > GuncelenecekIndex; i--)
        arr[i] = arr[i];

    arr[GuncelenecekIndex] = GuncelDeger;

    cout << "Yeni dizi:" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

}

void ArrayList::ekle(int YeniDeger, int EklenecekIndex)
{
    int arr[10];
    for (int  i = 0; i < 9; i++)
    
        arr[i] = i;
    

    cout << "Baslangic dizisi:" << endl;
    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";       
    cout << endl;
    cout << endl;


    for (int i = 9 ; i > EklenecekIndex; i--)
        arr[i] = arr[i - 1];

    arr[EklenecekIndex] = YeniDeger;

    cout << "Yeni dizi:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}








 


