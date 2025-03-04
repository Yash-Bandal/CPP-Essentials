#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=10;
    /*Press Ctrl+ D TO check Each*/

    // //Pre-Increment
    // b=++a;
    // cout<<"\na : "<<a;
    // cout<<"\nb : "<<b;
    
    // //Post-Inccrement
    // b=a++;
    // cout<<"\na : "<<a;
    // cout<<"\nb : "<<b;

    // //Pre-Decrement
    // b=--a;
    // cout<<"\na : "<<a;
    // cout<<"\nb : "<<b;

    // //Post-Decrement
    // b=a--;
    // cout<<"\na : "<<a;
    // cout<<"\nb : "<<b;

    int c;
    c=(a++ + ++a);  //a++=11   +  ++a ie imagine b=++a=11
    cout<<"\nc : "<<c;
    cout<<"\na : "<<a;  //a++=11 and ++a = 11+1 = 12

    int x,y;
    x=11;
    y=((++x) *(++x) * (++x));  //13*13*14  if only (++x) *(++x) ans 13*13=169
    cout<<"\ny :"<<y;         //for such quest increment x first by 2 then by 1
    cout<<"\nx :"<<x;
    
   
    return 0;
} 
