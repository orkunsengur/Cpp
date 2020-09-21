// LinkedList.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
/////////////////////

struct link
{
    int data;
    link* next;
};

///////////////////////
class linklist
{
private:
    link* first;  // pointer to first link
public:
    linklist()
    {
        first = NULL;
    }
    void add_item(int item)
    {
        link*new_node;
        new_node = new link;
        new_node->data = item;
        new_node->next = first;
        first = new_node;
    }
    void display_list()
    {
        link* temp;
        temp = first;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    
    linklist list1;
    list1.add_item(25);
    list1.add_item(30);
    list1.add_item(35);
    list1.add_item(40);

    list1.display_list();
    
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
