#include<iostream>
using namespace std;
int main()
{
    int length=0;
    int *arr=NULL;

    cout<<"enter the number of elements\n";
    cin>>length;
    // step1- allocate the memory
    arr=new int[length];
    if(arr==NULL)
    {
        cout<<"unable to allocate the memory\n";
    }
    else
    {
        cout<<"memory gets successfully allocated\n";

    }
    //step2-use the memory

    //step3-deallocate memory
    delete []arr; // whole memory of arr gets free
    //delete arr; only 1st element of arr gets free
    return 0;
}