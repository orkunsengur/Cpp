// PointerToObjects.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
/*
#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inch;
public:
    Distance(): feet(0), inch(0)
    {
        ;
    }
    Distance(int f, float i) : feet(f), inch(i)
    {
        ;
    }
    void getdist()
    {
        cout << "Enter feet: "; cin >> feet;
        cout << "Enter inch: "; cin >> inch;
    }
    void display()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inch: " << inch << endl;
    }
};

int main()
{
    Distance dist(5,3.2);
    Distance* dptr;
    dptr = new Distance; // It is optinal
    dptr = &dist;
    dptr->display();
}
*/

#include <iostream>
using namespace std;

class person
{
private:
    char name[40];
public:
    void setname()
    {
        cout << "Enter name: "; cin >> name;
    }
    void printname()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    person* perobj[100];
    char c;
    int n=0,i;

    do
    {
        perobj[n] = new person;
        perobj[n]->setname();
        cout << "Enter (y/n): ";
        cin >> c;
        n++;
    } while (c == 'y');

    for (i = 0; i < n; i++)
    {
        perobj[i]->printname();
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
