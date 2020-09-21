// Exercise8.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

class String
{
protected:
    enum { SIZE = 15 };
    char str[SIZE];
public:
    String()
    {
        str[0] = 0;
    }
    String(char a[])
    {
        strcpy(str, a);
    }
    void display()
    {
        cout << str << endl;
    }
    operator char* ()
    {
        return str;
    }
};

class Pstring : public String   //Derived class
{
public:

    Pstring(char s[])
    {
        if (strlen(s) < SIZE)
        {
            strcpy(str, s);
        }
        else
        {
            strncpy(str, s, SIZE - 1);
            str[SIZE - 1] = 0;
        }
    }
};
/// <summary>
/// //////////
/// </summary>
/// <returns></returns>
class Pstring2 : public Pstring
{
public:
    Pstring2(char s[]) :Pstring(s)
    {
        ;
    }

    void left(Pstring2 s1, int n)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            str[i] = s1.str[i];
        }
        str[n] = 0;
    }
    void mid(Pstring2 s1, int a, int n)
    {
        int i,j=0;
        for (i = a; i < a + n; i++)
        {
            str[j++] = s1.str[i];
        }
        str[j] = 0;
    }
    void right(Pstring2 s1, int n)
    {
        int a = strlen(s1.str) - n;
        int i,j=0;
        for (i = a; i < a + n; i++)
        {
            str[j++] = s1.str[i];
        }
        str[j] = 0;
    }
};
int main()
{
    Pstring s1 = (char*)("short");
    Pstring s2 = (char*)("tooooo long string");
    s1.display();
    s2.display();

    Pstring2 a = (char*)("orkun");
    Pstring2 b = (char*)("abcde klmnz");
    a.display();
    b.display();
    a.left(b, 2);
    a.display();
    a.mid(b, 3, 4);
    a.display();
    a.right(b, 5);
    a.display();
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
