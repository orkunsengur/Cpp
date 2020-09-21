// OverLoadingBinary.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
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
    Distance(int ft, float in) : feet(ft), inch(in) // two argument construction
    {

    }
    void get_value()
    {
        cout << "Enter the feet: ";
        cin >> feet;
        cout << "Enter the inch ";
        cin >> inch;
    }
    void display()
    {
        cout << "Feet: " << feet<<endl;
        cout << "Inches: " << inch << endl;
    }
    Distance operator ++(int)   // postfix increment
    {
        return Distance(feet++,inch++);  // two argument for construction
       //return Distance(feet++);         // one argument for construction  
    }

    Distance operator + (Distance) const;
    Distance operator * (Distance) const;

    Distance operator - (Distance d) const
    {
        int f;
        float i;
        f = feet - d.feet;
        i = inch - d.inch;
        return Distance(f, i);
    }
};

Distance Distance::operator+(Distance d) const
{
    int f;
    float i;
    f = feet + d.feet;
    i = inch + d.inch;
    return Distance(f, i);
}

Distance Distance::operator * (Distance d) const
{
    int f;
    float i;
    f = feet * d.feet;
    i = inch * d.inch;
    return Distance(f, i);
}


int main()
{
    Distance d1, d2(5, 8.5), d3, d4, d5, d6,d7;
    d1.get_value();
    d3 = d1 + d2;
    d4 = d1 + d2 + d3;
    cout << "Distance d1: " << endl;
    d1.display();
    cout << "Distance d2: " << endl;
    d2.display();
    cout << "Distance d3: " << endl;
    d3.display();
    cout << "Distance d4: " << endl;
    d4.display();
    cout << endl << "Multiplacation" << endl;
    d5 = d1 * d2;
    d5.display();
    cout << endl << "Substraction" << endl;
    d6 = d1-d2;
    d6.display();
    d7=d6++;
    d6.display();
    cout << "\nd7 distance" << endl;
    d7.display();
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

