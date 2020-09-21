// NamelessTemporary.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

class Counter
{
private:
    unsigned int count;
    float count2;
public:
    Counter() : count(0), count2(0)
    {

    }
    Counter(unsigned int val) : count(val), count2(val)
    {

    }
    Counter operator ++() // overload ++ operator for prefix form
    {
        
        return Counter(++count);      //increment counter, then return an unnamed temporary object initialized to this count
    }
    Counter operator ++ (int)  // overload ++ operator for postfiix version. The only difference is (int)
    {
        return Counter(count++);
    }
    Counter operator -- ()
    {
        return Counter(--count);
    }
    Counter operator -- (int)
    {
        return Counter(count--);
    }
    unsigned int get_count()
    {
        return count;
    }
};



int main()
{
    Counter c1, c2, c3(2);

    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    cout << c3.get_count() << endl;  
    cout << endl;
    ++c1;
    ++c2;
    ++c3;
    c1 =++c3;
    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    cout << c3.get_count() << endl;

    c3 = c1++;
    c2 = c3++;
    cout << "After postfix" << endl;
    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    cout << c3.get_count() << endl;

    cout << "Subtraction with prefix" << endl;
    --c1;
    c2 = --c3;
    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    cout << c3.get_count() << endl;
    cout << "Subtraction with postfix" << endl;
    c3 = c1--;
    c2 = c3--;
    cout << c1.get_count() << endl;
    cout << c2.get_count() << endl;
    cout << c3.get_count() << endl;

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
