// GraphicApplication.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

// circstrc.cpp
// circles as graphics objects

#include "msoftcon.h" // for graphics functions
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
struct circle //graphics circle
{
	int xCo,yCo; //coordinates of center
	int radius;
	color fillcolor; //color
	fstyle fillstyle; //fill pattern
};
////////////////////////////////////////////////////////////////
void circ_draw(circle c)
{
	set_color(c.fillcolor); //set color
	set_fill_style(c.fillstyle); //set fill pattern
	draw_circle(c.xCo, c.yCo, c.radius); //draw solid circle
}
//--------------------------------------------------------------
int main()
{
	init_graphics(); //initialize graphics system
	//create circles
	circle c1 = { 15, 7, 5, cBLUE, X_FILL };
	circle c2 = { 41, 12, 7, cRED, O_FILL };
	circle c3 = { 65, 18, 4, cGREEN, MEDIUM_FILL };
	//draw_circle(c1); //draw circles
	draw_circle(15, 7, 5);
	//circ_draw(c2);
	//circ_draw(c3);
	set_cursor_pos(1, 25); //cursor to lower left corner
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
