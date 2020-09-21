// Exercise1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
using namespace std;

class publication
{
private:
    string title;
    float price;
public:
    void get_data()
    {
        cout << "Enter title: "; cin >> title;
        cout << "Enter price: "; cin >> price;
    }
    void show_data()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
/// <summary>
/// ////////////////
/// </summary>
/// <returns></returns>
class book: private publication
{
private:
    int page_count;
public:
    void get_data()
    {
        publication::get_data();
        cout << "Enter number of page: "; cin >> page_count;
    }
    void show_data()
    {
        publication::show_data();
        cout << "Number of page: " << page_count << endl;
    }
};
/// <summary>
/// ///////////
/// </summary>
/// <returns></returns>
class tape : private publication
{
private:
    float play_time;
public:
    void get_data()
    {
        publication::get_data();
        cout << "Enter play time: "; cin >> play_time;
    }
    void show_data()
    {
        publication::show_data();
        cout << "Play time: " << play_time << endl;
    }
};
/// <summary>
/// //////////
/// </summary>
/// <returns></returns>
int main()
{
    book b;
    tape t;
    cout << "-----Book-----" << endl;
    b.get_data();
    cout << "-----Tape-----" << endl;
    t.get_data();
    cout << "-----Book-----" << endl;
    b.show_data();
    cout << "-----Tape-----" << endl;
    t.show_data();
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
