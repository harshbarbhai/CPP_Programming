#include<iostream>
using namespace std;
 class demo
 {
    public:
    int i;
    int j;
    static int x;

    demo()
    {
        this->i=0;
        this->j=0;
    }

    demo (int a, int b)
    {
        this->i=a;
        this->j=b;
    }

    void fun()  // void fun(demo * const demo)
    {
        cout<<"inside fun\n";
        cout<<"value of i is"<<this->i<<"\n";
        cout<<"value of j is"<<this->j<<"\n";
        cout<<"value of x is"<<this->x<<"\n";

    }

    static void gum() //static void gun()  no this pointer because static
    {
        cout<<"inside gun\n";

    }
};

int demo::x=11;

int main()
{

    demo::gum();
    cout<<"value of x is"<<demo::x<<"\n";

    demo obj(10,20);
    obj.fun();
    return 0;
}