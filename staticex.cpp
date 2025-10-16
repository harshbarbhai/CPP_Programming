#include<iostream>
using namespace std;
 class demo
 {
    private:

        static int x;
     
   
    public:
    int i;
    int j;
    

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
        
    }
    static void gum() //static void gun()  no this pointer because static
    {
        
        cout<<"value of x="<<x<<"\n";
    }
    
    

   
};
int demo::x = 99;



int main()
{

    demo::gum();

    demo obj(10,20);
    obj.fun();
   //  obj.gun(); not allowed  demo::gun();

   cout<<"size of obj is"<<sizeof(obj)<<"\n";

    return 0;
}