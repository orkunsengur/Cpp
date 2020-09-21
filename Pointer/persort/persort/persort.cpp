// persort.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
using namespace std;
/// <summary>
/// /////////////////////////////
/// </summary>
/// <returns></returns>

class person
{
protected:
    string name;
public:
    void setName()
    {
        cout << "Enter name: "; cin >> name;
    }
    void printName()
    {
        cout << name << endl;
    }
    string getname()
    {
        return name;
    }
};
/// <summary>
/// ///////
/// </summary>
/// <returns></returns>
void bsort(person**, int);
void order_str(person**, person**);

void order_str(person** p1, person** p2)
{
    person* temp;
    
    if ((*p1)->getname()> (*p2)->getname())
    {
        temp=*p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

void bsort(person** pp, int n)
{
    int k, j;

    for (j = 0; j < n-1; j++)
    {
        for (k = j+1; k< n; k++)
        {
            order_str(pp+j, pp+k);
        }
    }
}

int main()
{
    person* persptr[100];
    int n = 0, i;
    char choice;

    do
    {
        persptr[n] = new person;
        persptr[n]->setName();
        n++;
        cout << "Enter (y/n)";
        cin >> choice;
    } while (choice == 'y');
    
    cout << "UNSORTED LIST" << endl;
    
    for (i = 0; i < n; i++)
    {
        persptr[i]->printName();
    }

    cout << "SORTED LIST" << endl;

    bsort(persptr, n);

    for (i = 0; i < n; i++)
    {
        persptr[i]->printName();
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
