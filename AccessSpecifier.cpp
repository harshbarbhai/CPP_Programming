#include<iostream>
using namespace std;

class Base   //12
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;

    public:
    Base()  //constructor do not inhariate
    {
        i=10;
        j=20;
        k=30;
    }
    void fun()
    {
        cout<<i<<"\n"; //allowed
        cout<<j<<"\n"; //allowed
        cout<<k<<"\n"; //allowed
    }
    



};

class  Derived : public Base  //16 because 12 from base class 
{
    public:
    int x;
    void display()
    {
        cout<<i<<"\n"; //allowed
        cout<<j<<"\n"; //not allowed or error
        cout<<k<<"\n"; //allowed
    }
    
};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n"; //allowed
    cout<<bobj.j<<"\n"; //not allowed or error
    cout<<bobj.k<<"\n"; //not allowed or error

    cout<<dobj.i<<"\n"; //allowed
    cout<<dobj.j<<"\n"; //not allowed or error
    cout<<dobj.k<<"\n"; //not allowed or error

   dobj.fun();  //allowed
   dobj.display(); // allowed
    
    return 0;
}