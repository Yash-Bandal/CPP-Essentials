    /*
    var to store address  we can directly print address as &a but memory dont
    have name ..ptr is used as name as it is pointer
    *ptr hold value but ptr hold address
    
    or
    int *ptr=nullptr;
    ptr=&a;
    */

#include<iostream>
using namespace std;
int main()
{
    int a=10,b=10;
    //int *ptr1=&a;  
    int *ptr1=nullptr;  //method 1
    ptr1=&a;
    int *ptr2=&b;       //direct method 2

    
    cout<<"Value of a :"<<a<<endl;
    cout<<"Value of a :"<<*ptr1<<endl;
    cout<<"Address of a :"<<&a<<endl;
    cout<<"Address of a :"<<ptr1<<endl;
}
