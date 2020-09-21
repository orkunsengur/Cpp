// Inheritance1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


// A derived class example

#include <iostream>
using namespace std;

class Counter       //base class
{
protected:          // NOTE: Not private
    int count;
public:
    Counter() :count(0)
    {
        ;
    }
    Counter(int c) :count(c)
    {
        ;
    }
    int get_count() const
    {
        return count;
    }
    Counter operator ++()
    {
        return Counter(++count);
    }

};
/// <summary>
////// ///////////////////////////
/// </summary>
/// <returns></returns>

class CountDn :public Counter  //derived class 
{
public:
    CountDn() : Counter()
    {
        ;
    }
    CountDn(int c) : Counter(c)
    {
        ;
    }
    CountDn operator --()
    {
        return CountDn(--count);
    }
};
/// <summary>
/// /////////
/// </summary>
/// <returns></returns>
int main()
{
    CountDn c1(2), c2(5),c3;
    Counter c4;
    cout << "c1: " << c1.get_count() << endl;
    ++c1;
    cout << "c1: " << c1.get_count() << endl;
    --c1;
    cout << "c1: " << c1.get_count() << endl;
    c3 = --c2;
    cout << "c3: " << c3.get_count() << endl;
    c4 = c3;
    cout << "c4: " << c4.get_count() << endl;
    return 0;
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
