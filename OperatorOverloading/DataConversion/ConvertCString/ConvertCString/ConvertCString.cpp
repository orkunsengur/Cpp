// ConvertCString.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    enum{SIZE=50};
    char str[SIZE];
public:
    String()
    {
        str[0] = 0;
    }
    String(char s[])
    {
        strcpy_s(str, SIZE, s);
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
int main()
{
    String s1, s2;
    char n[] = "orkun";
    char a[] ="selam dunya";
    s1 = n;              //use 1-arg constructor to convert C-string to String class
    s2 = a;
    s1.display();
    //n = s2; It is  wrong
    cout << static_cast<char*>(s2);  //use conversion operator to convert String to C-string
    return 0;

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
