// ObjectToBasic.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
// Conversion between Object and Basic Types 


#include <iostream>
using namespace std;

class Distance
{
private:
    const float MTF = 3.280833F;
    int feet;
    float inch;
public:
    Distance() :feet(0), inch(0.0)
    {

    }
    Distance(float mtrs) // one construction. Convert meters to feet
    {
        float new_feet = MTF * mtrs;
        feet = int(new_feet);
        inch = (new_feet - feet)*12;
    }
    Distance(int f, float i) :feet(f), inch(i)
    {

    }
    void get_dist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }
    void show()
    {
        cout << "Feet: " << feet << " inch: " << inch << endl;
    }
    operator float()  // Convert to meters
    {
        float total_feet = inch / 12;
        total_feet += float(feet);
        return total_feet / MTF;
    }
};


int main()
{
    Distance dist1=2.35;
    Distance dist2(5, 10.25);
    float mtrs;
    cout << "Dist1 in feet" << endl;
    dist1.show();
    mtrs = dist1;
    cout << "Dist1 in metres" << endl;
    cout << mtrs << " meters" << endl;

    cout << "Dist2 in feet" << endl;
    dist2.show();
    mtrs = static_cast<float>(dist2);
    cout << "Dist2 in metres" << endl;
    cout << mtrs << " meters" << endl;


    // dist2 = mtrs; //error, = won’t convert
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
