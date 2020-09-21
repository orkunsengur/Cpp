// Time24toTim12version2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//ROUTINE IN DESTINATION OBJECT

#include <iostream>

using namespace std;

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
    int get_hours()
    {
        return hours;
    }
    int get_min()
    {
        return minutes;
    }
    int get_second()
    {
        return seconds;
    }

};
/////////////////////////////

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
    time12(bool p, int h, int m) :pm(p), hrs(h), mins(m) // 3-argument constructor
    {

    }
    time12(time24); // one-argument constructor
    void display() const
    {
        cout << hrs << ':';
        if (mins < 10)
            cout << '0';
        cout << mins << ' ';
        string am_pm = (pm) ? "p.m." : "a.m.";
        cout << am_pm;
    }
};

time12::time12(time24 t24) // one-argument constructor. Converts time24 object to time12
{
    int hours= t24.get_hours();
    int seconds = t24.get_second();
    int minutes = t24.get_min();
    int hrs24 = hours;
    bool pm_am = hours < 12 ? false : true;  // find am/pm
    int roundminus = seconds < 30 ? minutes : minutes + 1;
    
    if (roundminus == 60)
    {
        roundminus = 0;
        hrs24++;
        if (hrs24 == 12 || hrs24 == 24) //carry hrs?
            pm_am = (pm_am == true) ? false : true; //toggle am/pm
    }
    int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
    if (hrs12 == 0) //00 is 12 a.m.
    {
        hrs12 = 12; pm_am = false;
    }
    pm = pm_am;
    hrs = hrs12;
    mins = roundminus;
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
        time12 t12; //convert time24 to time12
        t12 = t24;
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
