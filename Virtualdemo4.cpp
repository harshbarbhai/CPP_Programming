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

    virtual void sun()
    {
        cout<<"inside base sun \n";
    }

    virtual void bun()
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

    virtual void mun()
    {
        cout<<"inside derived mun \n";
    }

    
};


int main()
{
    
    Base *bp=new Derived(); //upcasting

    cout<<sizeof(Base)<<"\n"; //16
    cout<<sizeof(Derived)<<"\n";//20

    /*bp->fun(); //Base fun
    bp->gun(); //Base gun
    bp->sun(); //Base sun
   // bp->run(); //error
   //bp->mun(); //error
    bp->bun(); //Base bun
    */
    
    
    
    return 0;
}