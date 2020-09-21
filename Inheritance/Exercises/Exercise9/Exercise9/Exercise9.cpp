// Exercise9.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
using namespace std;

class date
{
private:
    int month, day, year;
public:
    date() : month(0), day(0), year(0)
    {
        ;
    }
    date(int m, int d, int y) : month(m), day(d), year(y)
    {
        ;
    }
    void get_date()
    {
        cout << "Enter day: "; cin >> day;
        cout << "Enter month: "; cin >> month;
        cout << "Enter year: ";  cin >> year;
    }
    void show_date()
    {
        cout <<"Date: "<< day << "/" << month << "/" << year << endl;
    }
};

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
class publication2 : private publication
{
private:
    date d;
public:
    void get_data()
    {
        publication::get_data();
        d.get_date();
    }
    void show_data()
    {
        publication::show_data();
        d.show_date();
    }

};
class book : private publication2
{
private:
    int page_count;
public:
    void get_data()
    {
        publication2::get_data();
        cout << "Enter number of page: "; cin >> page_count;
    }
    void show_data()
    {
        publication2::show_data();
        cout << "Number of page: " << page_count << endl;
    }
};
/// <summary>
/// ///////////
/// </summary>
/// <returns></returns>
class tape : private publication2
{
private:
    float play_time;
public:
    void get_data()
    {
        publication2::get_data();
        cout << "Enter play time: "; cin >> play_time;
    }
    void show_data()
    {
        publication2::show_data();
        cout << "Play time: " << play_time << endl;
    }
};

int main()
{
    book b;
    tape t;
    b.get_data();
    t.get_data();
    cout << "\n\n";
    b.show_data();
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
