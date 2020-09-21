// Time12toTİME24.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//ROUTINE IN SOURCE OBJECT

#include <iostream>
#include <string>

using namespace std;


class time12
{
private:
    bool pm;     // true=pm and false=am
    int hrs;     //1 to 12
    int mins;     //0 to 59
public:
    time12() :pm(0), hrs(0), mins(0)
    {

    }
    time12(bool p, int h, int m) :pm(p), hrs(h), mins(m)
    {

    }
    void display() const
    {
        cout << hrs << ':';
        if (mins < 10)
        cout << '0';
        cout << mins <<' ';
        string am_pm = (pm )? "p.m.":"a.m.";
        cout << am_pm;
    }
};

class time24
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    time24() :hours(0), minutes(0), seconds(0)
    {

    }
    time24(int h, int m, int s) :hours(h), minutes(m), seconds(s)
    {

    }
    void display() const
    {
        if (hours < 10)
            cout << '0';
        cout << hours << ':';
        if (minutes < 10)
            cout << '0';
        cout << minutes << ':';
        if (seconds < 10)
            cout << '0';
        cout << seconds;
    }
    operator time12() const; // operator functions does not have a return type
};

time24::operator time12() const  //conversion operaotr
{
    int hrs24 = hours;
    bool pm = hours < 12 ? false : true;  // find am/pm
    int roundminus = seconds < 30 ? minutes : minutes + 1;
    if (roundminus == 60)
    {
        roundminus = 0;
        hrs24++;
        if (hrs24 == 12 || hrs24 == 24) //carry hrs?
            pm = (pm == true) ? false : true; //toggle am/pm
    }
    int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
    if (hrs12 == 0) //00 is 12 a.m.
    {
        hrs12 = 12; pm = false;
    }
    return time12(pm, hrs12, roundminus);
}

int main()
{
    int h, m, s;
    while (true)

    { //get 24-hr time from user
        cout << "Enter 24 - hour time : \n";
        cout << " Hours(0 to 23) : "; cin >> h;
        if (h > 23) //quit if hours > 23
            return(1);
        cout << " Minutes : "; cin >> m;
        cout << " Seconds : "; cin >> s;
        time24 t24(h, m, s); //make a time24
        cout << "You entered : "; //display the time24
        t24.display();
        time12 t12 = t24; //convert time24 to time12
        cout << "\n12 - hour time : "; //display equivalent time12
        t12.display();
        cout << "\n\n";
    }
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
