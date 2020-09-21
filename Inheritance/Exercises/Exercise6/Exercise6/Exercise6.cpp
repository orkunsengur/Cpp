// Exercise6.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <process.h>
using namespace std;
const int LIMIT = 100;

class safearray
{
private:
    int arr[LIMIT];
public:
    int& operator [] (int n)
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "Index out of bounds";
            exit(1);
        }
        else
        {
            return arr[n];
        }
    }
};
/// <summary>
/// /////////////////
/// </summary>
/// <returns></returns>
class safehilo : private safearray
{
private:
    int lower;
    int upper;
public:
    safehilo() : lower(0), upper(LIMIT)
    {
        ;
    }
    safehilo(int l, int u) : lower(l), upper(u)
    {
        if (u - l > LIMIT)
        {
            cout << "Array limits exceed maximum permissible range.";
            exit(1);
        }
    }
    int& operator [](int n)
    {
        if (n < lower || n >= upper)
        {
            cout << "\nIndex out of bounds";  
            exit(1);
        }
        safearray::operator[](n - lower);
    }
};
int main()
{
    safehilo sa1(100, 175);
    for (int j = 100; j < 175; j++) //insert elements
        sa1[j] = j * 10; //*left* side of equal sign
    for (int j = 100; j < 175; j++) //display elements
    {
        int temp = sa1[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp << endl;
    }
   
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
