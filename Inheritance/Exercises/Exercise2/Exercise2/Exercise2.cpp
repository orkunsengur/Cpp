// Exercise2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

class String
{
protected:
    enum { SIZE = 10 };
    char str[SIZE];
public:
    String()
    {
        str[0] = 0;
    }
    String(char a[])
    {
        cout << "burasi calismiyor" << endl;
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
/// <summary>
/// ///////////
/// </summary>
/// <returns></returns>
class Pstring: public String
{
public:
    
    Pstring(char s[])
    {
        if (strlen(s) < SIZE)
        {
            String a=String(s);
            cout << (char*)a << endl;
        }
        else
        {
            strncpy(str, s, SIZE - 1);
            str[SIZE - 1] = 0;
        }
    }
};
int main()
{
  
    Pstring s1=(char*)("short");
    Pstring s2 = (char*)("tooooo long string");
    s2.display();
    s1.display();
    
    
    /*
    char x[] = "asde", a[80];
    String s3(x);
    String st=(char*)("orkun");
    s3.display();
    strcpy(a, (char*)st);
    cout << a << endl;
    */
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
