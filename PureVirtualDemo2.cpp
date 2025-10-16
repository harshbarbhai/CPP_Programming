#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;
    int Addition(int a,int b)  //concrete
    {
        return a+b;
    }
    virtual int Substraction(int a,int b)=0; //abstract

};

class Derived:public Base 
{
    public:
    int x;
    int Substraction(int a,int b)   //concrete
    {
        return a-b;
    }
    int Multiplication(int a,int b)   //concrete
    {
        return a*b;
    }
    

    
};


int main()
{
    
    Base *bp=new Derived(); //upcasting

    int iret=0;
    iret=bp->Addition(11,10);   //21
    cout<<iret<<"\n";
    iret=bp->Substraction(11,10);    //1
    cout<<iret<<"\n";
    //iret=bp->Multiplication(11,10); //error

    
    
    
    
    
    return 0;
}