// AritmeticAssignment.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inch;
public:
    Distance() : feet(0), inch(0)
    {

    }
    Distance(int f, float i) : feet(f), inch(i)
    {

    }
    void get_dist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch ";
        cin >> inch;
    }
    void show()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inches: " << inch << endl;
    }
    void operator += (Distance);
};

void Distance::operator += (Distance d)
{
    feet += d.feet;
    inch += d.inch;
}


int main()
{
    Distance d1(3,3.5), d2, d3;
    d2.get_dist();
    cout << "D1:  " << endl;
    d1.show();
    cout << "D2: " << endl;
    d2.show();
    d1 += d2;
    cout << "D1:  " << endl;
    d1.show();

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
