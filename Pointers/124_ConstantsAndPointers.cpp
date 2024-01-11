

//==========================================================
#include <iostream>

using namespace std;

int main() 
{
    // Pointers to Constants
    const int value1 = 10;
    const int* ptrToConst = &value1;

    // Cannot modify the value through ptrToConst
    // *ptrToConst = 20; // Error

    // Can still change the pointer to point to another constant
    const int value2 = 30;
    ptrToConst = &value2;

    cout << "Value pointed by ptrToConst: " << *ptrToConst << endl;


//==========================================================

    // Constant Pointers
    int variable1 = 5;
    int* const constPtr = &variable1;

    // Can modify the value through constPtr
    *constPtr = 15;

    // Cannot change the pointer to point to another variable
    // constPtr = &value2; // Error

    cout << "Value pointed by constPtr: " << *constPtr << endl;
    

//==========================================================    

    // Constant Pointers to Constants
    const int value3 = 25;
    const int* const constPtrToConst = &value3;

    // Cannot modify the value through constPtrToConst
    // *constPtrToConst = 35; // Error

    // Cannot change the pointer to point to another constant
    // constPtrToConst = &value2; // Error

    cout << "Value pointed by constPtrToConst: " << *constPtrToConst << endl;
    

//==========================================================    

    return 0;
}
