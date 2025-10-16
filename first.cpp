#include<iostream>
class demo
{
    public:
    int ino1;
    int ino2;
    //behaviout
    demo()
    {
        ino1=0;
        ino2=0;
    }
    demo(int a,int b)
    {
        ino1=a;
        ino2=b;

    }
    ~demo()
    {
        //logic
    }

};
int main()
{
    demo obj1;
    demo obj2(11,21);

    return 0;
}