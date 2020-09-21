// UnaryOperator.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

class Counter
{
private:
    unsigned int count;
    float temp;
public:
    Counter() : count(0),temp(0)
    {

    }
    unsigned int get_count()
    {
        return count;
    }
    void operator ++ () // prefix operator
    {
        ++count;
    }
};



int main()
{
    Counter c1, c2,c3;
    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    ++c1;
    ++c2;
    ++c2;
    ++c2;
    c3 = c2;
    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    cout << c3.get_count() << endl;
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
