#include<iostream>
using namespace std;
class demo
{
    public:
    void fun(int *p)
    {
        cout<<"first defination";
    }
    void fun(float *p)
    {
        cout<<"second defination";
    }
    void fun(int no)
    {
        cout<<"third defination";
    }

};
int main()
{
    
    int no=11;
    float f=3.14;
    demo obj;
    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);



    return 0;

}