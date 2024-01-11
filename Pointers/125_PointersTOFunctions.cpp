// Section 12
//Imagine *Var/ptr is a lock..it can be only accesed with address &val or address holding name of ptr
// Passing Pointers 1
#include <iostream>
using namespace std;


void double_data(int *int_ptr) //*intptr hold value..thus pass address in call
{
   *int_ptr *= 2;	
}
//&val =address or pointer name is address

int main() {
    int value=10;
    int *int_ptr= nullptr;
    
    cout << "Value: " << value << endl;         // Output: 10
    double_data(&value);   //pass address                             //address 1 pass
    cout << "Value: " << value << endl;         // Output: 20
    cout << "-----------------------------" << endl;
    int_ptr = &value;  
    double_data(int_ptr);                                             //address 2 pass
    cout << "Value: " << value << endl;         // Output: 40

    cout  << endl;
    return 0;
} 
