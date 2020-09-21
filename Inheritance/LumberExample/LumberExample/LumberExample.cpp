// LumberExample.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>
using namespace std;
/// <summary>
/// ////////////////
/// </summary>
/// <returns></returns>
/*
class Type
{
private:
    string dimension;
    string grade;
public:
    Type() : dimension("N/A"), grade("N/A")
    {
        ;
    }
    Type(string d, string g) : dimension(d), grade(g)
    {
        ;
    }
    void gettype()
    {
        cout << "Enter nominal dimensions(2x4 etc.) : ";
        cin >> dimension;
        cout << "Enter grade(rough, const, etc.) : ";
        cin >> grade;
    }
    void showtype() const
    {
        cout << "\nDimensions : " << dimension << endl;
        cout << "\nGrade : " << grade << endl;
    }
};
/// <summary>
/// ////////////////////////
/// </summary>
class Distance
{
private:
    int feet;
    float inch;
public:
    Distance() : feet(0), inch(0)
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
    void showdist() const
    {
        cout << feet << "\'-" << inch << '\"' << endl;
    }
};
/// <summary>
/// //////////////
/// </summary>
/// <returns></returns>
class Lumber : private Type, private Distance
{
private:
    int quantity;
    double price;
public:
    Lumber() : Type(), Distance(), quantity(0), price(0)
    {
        ;
    }
    Lumber(string d, string g, int f, float i, int q, double p) : Type(d, g), Distance(f, i), quantity(q), price(p)
    {
        
    }
    void getlumber()
    {
        Type::gettype();
        Distance::getdist();
        cout << "Enter the quantity: "; cin >> quantity;
        cout << "Enter the price: "; cin >> price;
    }
    void showlumber() const
    {
        Type::showtype();
        Distance::showdist();
        cout << "quantity: " << quantity << endl;
        cout << "price: " << price << endl;
    }
};
        
*/




/*
int main()
{
    Lumber s1, s2("2x4", "const", 8, 0.0, 200, 4.45);
    s1.getlumber();
    s1.showlumber();
    s2.showlumber();
}
*/
// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
class A
{
public:
    void func()
    {
        ; //count++;
    }
};
class B : public A
{

};
class C : public A
{

};
class D : public B, public C
{

};

////////////////////////////////////////////////////////////////
int main()
{
    D objD;
    objD.C::func(); //ambiguous: won’t compile
    return 0;
}