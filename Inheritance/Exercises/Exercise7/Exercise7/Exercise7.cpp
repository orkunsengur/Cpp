// Exercise7.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

class Counter
{
protected: //NOTE: not private
    unsigned int count; //count
public:
    Counter() : count() //constructor, no args
    { }
    Counter(int c) : count(c) //constructor, one arg
    { }
    unsigned int get_count() const //return count
    {
        return count;
    }
    Counter operator ++ () //incr count (prefix)
    {
        return Counter(++count);
    }
};
////////////////////////////////////////////////////////////////
class CountDn : public Counter
{
public:
    CountDn() : Counter() //constructor, no args
    { }
    CountDn(int c) : Counter(c) //constructor, 1 arg
    { }
    CountDn operator -- () //decr count (prefix)
    {
        return CountDn(--count);
    }
};

class CountDn2 : public CountDn
{
public:
    CountDn2() :CountDn()
    {
        ;
    }
    CountDn2(int c) : CountDn(c)
    {
        ;
    }
    CountDn2 operator --(int)
    {
        return CountDn2(count--);
    }
    CountDn2 operator ++(int)
    {
        return CountDn2(count++);
    }
    CountDn2 operator ++()
    {
        return CountDn2(++count);
    }
    CountDn2 operator --()
    {
        return CountDn2(--count);
    }

};

int main()
{
    CountDn2 c1(3), c2(5),c3;

    c3=--c1;
    c2=++c1;
    c1++;
    ++c1;
    cout<<"c1= " << c1.get_count() << endl;
    cout << "c3= " << c3.get_count() << endl;
    c1--;
    --c2;
    cout << "c1= " << c1.get_count() << endl;
    cout << "c2= " << c2.get_count() << endl;
    c3=c2--;
    cout << "c2= " << c2.get_count() << endl;
    cout << "c3= " << c3.get_count() << endl;
    c3=++c1;
    cout << "c1= " << c1.get_count() << endl;
    cout << "c3= " << c3.get_count() << endl;
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
