/*
============================

Normal--
int *pointer=&Varname;

*ptr=value
ptr=address

============================

Array--
int *Pointer=ArrayName

*ptr=value  of first
ptr=address
ptr[index]=ArrayName[index]  both hold value

============================
*/


#include<iostream>
using namespace std;
int main()
{
    int arrName[]={100,99,98};
    cout<<"The Name holds address of FIrst ele :"<<arrName<<endl;  //arrName=&arrName[0]
    cout<<&arrName[0];
    
    int *arrPtr;
    arrPtr=arrName;   //dont use & as arrName itself refers to address not var
      cout<<"\nArray Ptr Hold address :"<<arrPtr;
      cout<<"\nArray Ptr points :"<<*arrPtr;
      cout<<"\nArray Ptr points :"<<arrPtr[0];
      cout<<"\nArray Ptr points :"<<arrName[0];
      
      //So we can use array pointer and arrayName interchangebly
      
      
      cout<<endl;
      
//=========================================================
    int scores[] {100, 95, 89};
    
    cout << "Value of scores: " << scores << endl;      // Output: address of array first element
    
    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;
    
    cout << "\nArray subscript notation -------------------------" << endl;
    cout << scores[0] << endl;      // Output: 100
    cout << scores[1] << endl;      // Output: 95
    cout << scores[2] << endl;      // Output: 89
    
    cout << "\nPointer subscript notation -------------------------" << endl;
    cout << score_ptr[0] << endl;   // Output: 100
    cout << score_ptr[1] << endl;   // Output: 95
    cout << score_ptr[2] << endl;   // Output: 89
    
    cout << "\nPointer offset notation-------------------------" << endl;
    cout << *score_ptr << endl;         // *address         // Output: 100
    cout << *(score_ptr + 1) << endl;   // *(address + 4 bytes)   // Output: 95
    cout << *(score_ptr + 2) << endl;   // *(address + 8 bytes)   // Output: 89
    
    cout << "\nArray offset notation-------------------------" << endl;
    cout << *scores << endl;            // Output: 100
    cout << *(scores + 1) << endl;      // Output: 95
    cout << *(scores + 2) << endl;      // Output: 89
    
    cout << endl;

    return 0;
}
