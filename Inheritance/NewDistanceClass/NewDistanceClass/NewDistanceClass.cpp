// NewDistanceClass.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


//Here the DistSign class adds the functionality to deal with signed numbers.

#include <iostream>
using namespace std;

enum posneg{pos,neg};
///////////////////////////////////////////////////////
class Distance
{
protected:
	int feet;
	float inch;
public:
	Distance() :feet(0), inch(0)
	{
		;
	}
	Distance(int f, float i) :feet(f), inch(i)
	{
		;
	}
	void getdist()
	{
		cout << "Enter feet: "; cin >> feet;
		cout << "Enter inch: "; cin >> inch;
	}
	void show()
	{
		cout << "Feet: " << feet << "  " << "Inch: " << inch << endl;
	}
};

/////////////////////////////////////////////////////////////
class DistSign : public Distance   //adds sign to Distance
{
private:
	posneg sign;
public:
	DistSign() : Distance()
	{
		sign=pos;
	}
	DistSign(int f, float i,posneg a=pos) : Distance(f, i) // call the base class two-argument constructor. 													    	
	{														// Third argument has default value pos unless it is not specified	
		sign=a;
	}
	void getdist()
	{
		char a;
		Distance::getdist();
		cout << "Enter sign: (+) or (-)";
		cin >> a;
		sign = (a == '+') ? pos : neg;
	}
	void show()
	{
		cout << ((sign == pos) ? "(+)" : "(-)");
		Distance::show();
	}
};
/////////////////////////////////////////////////////////////////////
int main()
{
	DistSign d1(5,6.5), d2(3,5.5,neg),d3;
	d1.show();
	d2.show();
	d3.getdist();
	d3.show();
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
