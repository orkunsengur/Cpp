// empcont.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
using namespace std;
/// <summary>
/// /////////////
/// </summary>
/// <returns></returns>
class student
{
private:
    string school;
    string degree;
public:
    void getedu()
    {
        cout << "Enter name of school: "; cin >> school;
        cout << "Enter highest degree earned: "; cin >> degree;
    }
    void putedu() const
    {
        cout << "School: " << school << endl;
        cout << "Degree: " << degree << endl;
    }
};
/// <summary>
/// ///////////////////////
/// </summary>
/// <returns></returns>
class employee
{
private:
    string name;
    unsigned long int number;
public:
    void getdata()
    {
        cout << "Enter the name: "; cin >> name;
        cout << "Enter the number: "; cin >> number;
    }
    void putdata() const
    {
        cout << "Name: " << name << endl;
        cout << "Number: " << number << endl;
    }
};
/// <summary>
/// ///////////////
/// </summary>
/// <returns></returns>
class manager
{
private:
    string title;
    double dues;
    employee emp;
    student stu;
public:
    void getdata()
    {
        emp.getdata();
        stu.getedu();
        cout << "Enter the title: "; cin >> title;
        cout << "Enter the dues: "; cin >> dues;
    }
    void putdata()
    {
        emp.putdata();
        stu.putedu();
        cout << "Title: " << title << endl;
        cout << "Dues: " << dues << endl;
    }
};
/// <summary>
/// ///////
/// </summary>
/// <returns></returns>
class scientist
{
private:
    employee e;
    student s;
    int pubs;
public:
    void getdata()
    {
        e.getdata();
        cout << "Enter number of pubs : "; cin >> pubs;
        s.getedu();
    }
    void putdata()
    {
        e.putdata();
        cout << "Number of publications: " << pubs << endl;
        s.putedu();
    }
};
//////////////////
class laborer
{
private:
    employee e;
public:
    void getdata()
    {
        e.getdata();
    }
    void putdata()
    {
        e.putdata();
    }
};
int main()
{
    manager m1;
    scientist s1;
    laborer l1;

    cout << "Enter data for m1:" << endl;
    m1.getdata();
    cout << "Enter data for s1:" << endl;
    s1.getdata();
    cout << "Enter data for l1:" << endl;
    l1.getdata();

    m1.putdata();
    s1.putdata();
    l1.putdata();
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
