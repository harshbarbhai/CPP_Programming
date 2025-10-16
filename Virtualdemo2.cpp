#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;
    void fun()
    {
        cout<<"inside base fun \n";
    }

    void gun()
    {
        cout<<"inside base gun \n";
    }

    void sun()
    {
        cout<<"inside base sun \n";
    }

    void bun()
    {
        cout<<"inside base bun \n";
    }


};

class Derived:public Base
{
    public:
    int x;
    void gun()
    {
        cout<<"inside derived gun \n";
    }

    void sun()
    {
        cout<<"inside derived sun \n";
    }

    void run()
    {
        cout<<"inside derived run \n";
    }

    void mun()
    {
        cout<<"inside derived mun \n";
    }

    
};


int main()
{
    Base *bp1=new Base();       //No casting
    Derived *dp1=new Derived();  //No casting
    Base *bp2=new Derived(); //upcasting allowed
    Derived *dp2=new Base();//Downcasting not allowed error
    
    
    return 0;
}