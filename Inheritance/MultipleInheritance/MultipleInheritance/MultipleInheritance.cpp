// MultipleInheritance.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
const int LEN = 80; // Max length of names
/////////////////////////////////
class employee
{
private:
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
        cout << "Number: " << number << endl;
    }
};
/// <summary>
/// //////////////////
/// </summary>
class student
{
private:
    char school[LEN];
    char degree[LEN];
public:
    void getedu()
    {
        cout << "Enter the name of school or university: ";
        cin >> school;
        cout << "Enter the highest degree: ";
        cin >> degree;
    }
    void putedu() const
    {
        cout << "School or University: " << school << endl;
        cout << "Highest degree: " << degree << endl;
    }
};
/// <summary>
/// //////////////////////////////////////////
/// </summary>
/// <returns></returns>
class manager : private employee, private student
{
private:
    char title[LEN];    // "vice-president etc."
    double dues;        // golf club dues
public:
    void getdata()
    {
        employee::getdata();
        student::getedu();
        cout << "Enter the title: "; cin >> title;
        cout << "Enter the dues: "; cin >> dues;
    }
    void showdata()
    {
        employee::showdata();
        cout << "Title: " << title << endl;
        cout << "Dues: " << dues << endl;
        student::putedu();
    }
};
//////////////////////////////////////
class scientist :private employee, private student
{
private:
    int pubs;           //number of publications
public:
    void getdata()
    {
        employee::getdata();
        cout << "Enter the number of pubs: "; cin >> pubs;
        student::getedu();
    }
    void showdata()
    {
        employee::showdata();
        cout << "Number of pubs: " << pubs << endl;
        student::putedu();
    }
};
/// <summary>
/// //////////////
/// </summary>
class laborer :public employee // since it has no member function, objects of laborer class should access the employee class.
{                              // so 'public' keyword must be used.
    ;
};
int main()
{
    manager m1;
    scientist s1;
    
    cout << "Enter data for m1:" << endl;
    m1.getdata();
    cout << "Enter data for s1:" << endl;
    s1.getdata();

    cout << "\n\n" << endl;
    cout << "Manager 1:" << endl;
    m1.showdata();
    cout << "Scientist 1:" << endl;
    s1.showdata();
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
