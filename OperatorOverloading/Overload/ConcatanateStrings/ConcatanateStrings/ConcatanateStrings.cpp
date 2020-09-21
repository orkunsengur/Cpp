// ConcatanateStrings.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

/*Concatanate and Comparing Strings*/

class String
{
private:
    static int const MAX = 80;
    char str[MAX];
public:
    String()
    {
        str[0] = 0;
    }
    String(char p[])
    {
        strcpy_s(str, MAX, p);
    }
    void show()
    {
        cout << str << endl;
    }
    String operator + (String) const;
    bool operator == (String) const;
};

String String::operator + (String s) const
{
    char temp[MAX];
    if (strlen(str) + strlen(s.str) < MAX)
    {
        strcpy_s(temp,MAX,str);
        strcat_s(temp,MAX, s.str);
    }
    return String(temp);
}

bool String::operator == (String s) const
{
    if (strcmp(str, s.str) == 0)
        return true;
    else
        return false;
}




/*Comparision Operators Class <,>*/


class Distance
{
private:
    int feet;
    float inch;
public:
    Distance(): feet(0), inch(0)
    {

    }
    Distance(int f, float in) : feet(f), inch(in)
    {

    }
    void get_dist()
    {
        cout << "Enter Feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }
    void show()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inch:  " << inch << endl;
    }
    bool operator < (Distance d)
    {
        if (feet < d.feet)
            return true;
        else if (feet > d.feet)
            return false;
        else
            if (inch < d.inch)
                return true;
            else
                return false;
    }

    bool operator == (Distance d)
    {
        if (feet == d.feet && inch == d.inch)
            return true;
        else
            return false;
    }
};





int main()
{
    char name[] = "orkun ";
    char surname[] = "sengur";
    String s1(name), s2(surname), s3;
    s3 = s1 + s2;
    s3.show();

    Distance d1, d2(5, 8.5);
    bool result;
    d1.get_dist();
    result = d1 < d2;
    cout << result << endl;
    if (d1 == d2)
        cout << "They are equal" << endl;
    else
        cout << "They are not equal" << endl;

    if (s1 == s2)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;


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
