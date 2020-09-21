// Keywordecplicit.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

class Distance
{
private:
    const float MTF; //meters to feet
    int feet;
    float inches;
public: //no-args constructor
    Distance() : feet(0), inches(0.0), MTF(3.280833F)
    { }
    //EXPLICIT one-arg constructor
    explicit Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    void showdist() //display distance
    {
        cout << feet << "\' - " << inches << '\"';
    }
};

///////////////////////////////////

class scrollbar
{
private:
    int size; //related to constness
    mutable string owner; //not relevant to constness
public:
    scrollbar(int sz, string own) : size(sz), owner(own)
    { }
    void setSize(int sz) //changes size
    {
        size = sz;
    }
    void setOwner(string own) const //changes owner
    {
        owner = own;
    }
    int getSize() const //returns size
    {
        return size;
    }
    string getOwner() const //returns owner
    {
        return owner;
    }
};

/// <summary>
/// ////////////////////////
/// </summary>
/// <returns></returns>

int main()
{
    void fancyDist(Distance); //declaration
    Distance dist1(2.35F); //uses 1-arg constructor to convert meters to Distance
    //Distance dist1 = 2.35F; //ERROR if ctor is explicit
    cout << "\ndist1 = "; dist1.showdist();
    float mtrs = 3.0F;
    cout << "\ndist1 ";
    //fancyDist(mtrs); //ERROR if ctor is explicit
    cout << "\n\n";
    ///////////////////////

    const scrollbar sbar(60, "Window1");
    // sbar.setSize(100); //can’t do this to const obj
    sbar.setOwner("Window2"); //this is OK
    //these are OK too
    cout << sbar.getSize() << ", " << sbar.getOwner() << endl;
    return 0;

}








void fancyDist(Distance d)
{
    cout << "(in feet and inches) = ";
    d.showdist();
    cout << endl;
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
