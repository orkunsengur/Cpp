// Exercise11.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <sstream>
using namespace std;
#include <process.h>

typedef struct pair
{
    float x;
    float y;
}mypair;


/// <summary>
/// ////////////
/// </summary>
class Stack
{
protected: //NOTE: can’t be private
    enum { MAX = 4 }; //size of stack array
    int st[MAX]; //stack: array of integers
    int top; //index to top of stack
public:
    Stack() //constructor
    {
        top = -1;
    }
    void push(int var) //put number on stack
    {
        st[++top] = var;
    }
    int pop() //take number off stack
    {
        return st[top--];
    }
};

////////////////////////////////////////////////////////////////
class Stack2 : public Stack
{
public:
    void push(int var) //put number on stack
    {
        if (top >= MAX - 1) //error if stack full
        {
            cout << "\nError: stack is full"; 
            exit(1);
        }
        Stack::push(var); //call push() in Stack class
    }
    int pop() //take number off stack
    {
        if (top < 0) //error if stack empty
        {
            cout << "\nError: stack is empty\n"; 
            exit(1);
        }
        return Stack::pop(); //call pop() in Stack class
    }
};
////////////////////////////////////////////////////////////////
class pairStack : private Stack2
{
public:
    void push(mypair p)
    {
        Stack2::push(p.x);
        Stack2::push(p.y);
    }
    mypair pop()
    {
        mypair temp;
        temp.y = Stack2::pop();
        temp.x = Stack2::pop();
        return temp;
    }
};
int main()
{
    mypair p = { 1,2 }, a = { 5,6 },res;
    pairStack s;
    s.push(p);
    s.push(a);
    res = s.pop();
    cout << res.x << " " << res.y << endl;
    res = s.pop();
    cout << res.x << " " << res.y << endl;
    
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
