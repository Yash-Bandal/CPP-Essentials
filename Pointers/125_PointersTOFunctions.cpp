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


//==================================================================================================================


// Section 12
//pass by ref
// Passing Pointers 2
#include <iostream>

using namespace std;
void swap(int *,int *); //prototype ..not mandatory but🌹🙌



void swap(int *a,int *b) //*intptr hold value..thus pass address in call
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
//&val =address or pointer name is address

int main() 
{
    int val1=10;
    int val2=20;
    
    cout<<"Before swap :"<<endl;
    cout<<"Value 1 :"<<val1<<endl;
    cout<<"Value 2 :"<<val2<<endl;
    
    swap(&val1,&val2);
    
    cout<<"After swap :"<<endl;
    cout<<"Value 1 :"<<val1<<endl;
    cout<<"Value 2 :"<<val2<<endl;
    return 0;
} 

//===========================================================================================

// Section 12
// Passing Pointers 3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display( const vector<string> *const  v)
//if we remove const 1..we can change value
//if we remove *const of ptr..we can change ptr
{
// (*v).at(0) = "Funny";        // this is not allowed anymore because of the const in front of vector <string> in the function definition
    
    //Loop type 1
    for (auto i: *v)
        cout << i << " ";
    cout << endl;
    
    //Loop type 2
    for(int i=0;i<v->size();i++)
    {
        cout<<(*v)[i]<<endl;
    }
    
  
 // v = nullptr;                // this is not allowed anymore because of the const in front of the pointer v and after the dereferencing operator *
}

void display(int *array, int sentinel) {
    while (*array != sentinel)
        cout << *array++ << " ";
    // can't have const pointer because *array++ is changing where the pointer is pointing at
    cout << endl;
}

int main() 
{//func overload

    cout << "-----------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
   
    cout << "\n-----------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);
    
    cout  << endl;
    return 0;
}

