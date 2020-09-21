// employee.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
const int LEN = 80; // Max length of names
/////////////////////////////////
class employee
{
protected:
    char name[LEN];             //employee name
    unsigned long int number;   //employee number
public:
    employee()
    {
        name[0] = '\0';
        number = 0;
    }
    void getdata()
    {
        cout << "Enter name: "; cin >> name;
        cout << "Enter number:"; cin >> number;
    }
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Numer: " << number << endl;
    }
};
/// <summary>
/// //////////////////////////////////////////
/// </summary>
/// <returns></returns>
class manager : private employee
{
protected:
    char title[LEN];    // "vice-president etc."
    double dues;        // golf club dues
public:
    void getdata()
    {
        employee::getdata();
        cout << "Enter the title: "; cin >> title;
        cout << "Enter the dues: "; cin >> dues;
    }
    void showdata()
    {
        employee::showdata();
        cout << "Title: " << title << endl;
        cout << "Dues: " << dues << endl;
    }
};
//////////////////////////////////////
class scientist :private employee
{
protected:
    int pubs;           //number of publications
public:
    void getdata()
    {
        employee::getdata();
        cout << "Enter the number of pubs: "; cin >> pubs;
    }
    void showdata()
    {
        employee::showdata();
        cout << "Number of pubs: " << pubs << endl;
    }
};
/// <summary>
/// //////////////
/// </summary>
class laborer :public employee
{
    ;
};
//////////////////////////////
int main()
{
    manager m1, m2;
    scientist s1;
    laborer l1;

    cout << "Enter data for manager 1\n";
    m1.getdata();

    cout << "Enter data for manager 2\n";
    m2.getdata();

    cout << "Enter data for scientist\n";
    s1.getdata();

    cout << "Enter data for laborer\n";
    l1.getdata();

    cout << "Data on maneger 1\n";
    m1.showdata();

    cout << "Data on maneger 2\n";
    m2.showdata();

    cout << "Data on scientist 1\n";
    s1.showdata();

    cout << "Data on laborer\n";
    l1.showdata();




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
