// SingleAccessbyReference.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
/*Single Access Function Returning Reference*/
/*
#include <iostream>
#include <process.h>  //for exit(1)
using namespace std;

const int LIMIT = 100;

class safearray
{
private:
    int array[LIMIT];
public:
    int& access(int n)
    {
        if (n<0 || n>LIMIT)
        {
            cout << "\nIndex out of bounds\n";
            exit(1);
        }
        return array[n];
    }
};

int main()
{
    safearray s1;
    int i;

    for (i = 0; i < LIMIT; i++)
    {
        s1.access(i) = i * 10;
    }
    for (i = 0; i < LIMIT; i++)
    {
        cout << s1.access(i)<<endl;
    }
}
*/

/*Overloaded [] Operator Returning by Reference*/

#include <iostream>
#include <process.h>  //for exit(1)
using namespace std;

const int LIMIT = 100;
/// <summary>
/// ////////////////////////////////////////////////
/// </summary>
class safearray
{
private:
    int array[LIMIT];
public:
    int& operator[](int n) //note return by reference
    {
        if (n<0 || n>LIMIT)
        {
            cout << "\nIndex out of bounds\n";
            exit(1);
        }
        return array[n];
    }
};

/// <summary>
/// /////////////////////////
/// </summary>
/// <returns></returns>

int main()
{
    safearray s1, s2;
    int i;

    for (i = 0; i < LIMIT; i++)
    {
        s1[i] = i * 10;
    }

    for (i = 0; i < LIMIT; i++)
    {
        cout << s1[i] << endl;
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
