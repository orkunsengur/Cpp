// Stack2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <process.h>
using namespace std;

class Stack
{
protected:
    enum {MAX=9};
    int st[MAX];
    int top;      // index to top of stack
public:
    Stack()
    {
        top = -1;
    }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
};


class Stack2 : public Stack
{
public:
    void push(int var)
    {
        if (top >= MAX)
        {
            cout << "Stack is full" << endl;
            exit(1);
        }
        Stack::push(var);  //call push in Stack class
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
            exit(1);
        }
        return Stack::pop();  //call pop() in Stack class
    }
};

int main()
{
    Stack2 c1, c2;
    c1.push(2);  // the compiler uses the push function in Stack2 class
    c1.push(5);
    c1.push(15);
    c2 = c1;
    cout << c1.pop() << endl; //the compiler uses the push function in Stack2 class
    cout << c1.pop() << endl;
    cout << c1.pop() << endl;

    cout << endl;
   
    cout << c2.pop() << endl; //the compiler uses the push function in Stack2 class
    cout << c2.pop() << endl;
    cout << c2.pop() << endl;

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
