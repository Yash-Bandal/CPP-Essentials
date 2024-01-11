// Section 12
// Pointer Arithmetic                                               /


#include <iostream>

using namespace std;

int main() {
    //POinter normal..on numbers
    
    int arr[]= {100, 95, 89, 68, -1};
    int *arr_ptr =arr;
    
    while (*arr_ptr != -1)  //comparison operator 1 
    {
        cout << *arr_ptr << endl; //deref
        arr_ptr++;                //incre in 2 steps
    }  //eg 1000 1004 1008 1012 1016 are address of above..arrPtr incremnt adrs
    
//                                                        \ /            /
// here Increment Pointer not what it points ie *arr_ptr++ X arrPtr++ \ /
//                                                        / \          V
    
    
    cout << "\n-------------------------" << endl;
    arr_ptr = arr;
    while (*arr_ptr != -1)
    {
        cout << *arr_ptr++ << endl;   //same as above..deref and incr in 1step
      //  cout << (*arr_ptr)++ << endl; //-1
    }
        // 1st: *arr_ptr = dereference arr_ptr and use it;   2nd: arr_ptr++ = increment pointer address
        
        // Notice: *arr_ptr++ is different from (*arr_ptr)++
        
        
    //Pointer for strings    
    cout << "\n-------------------------" << endl;
    string s1 {"Yash"};
    string s2 {"Yash"};
    string s3 {"Lala"};

    string *p1 {&s1};		
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;		    // false because they point to different address
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;		    // true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;		// true because dereferenced pointer data are the same
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// true
    
    p3 = &s3;   // point to Lala
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// false
    
    
    /*Character pointer points to an alphabet in string*/

    cout << "\n-------------------------" << endl;
    char name[]  {"Yash"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2{nullptr};
    
    char_ptr1 = &name[0];   // F
    char_ptr2 = &name[3];   // n

    cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << endl; 
    
    cout << endl;
    return 0;
}
