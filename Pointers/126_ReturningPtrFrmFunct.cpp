// Section 12
// Return Pointer
#include <iostream>
using namespace std;

int *create_array(size_t size, int val = 0) 
{
   int *new_storage =nullptr;
   new_storage = new int[size];         // pointer to the heap 
   for (size_t i{0}; i < size; i++)
   {
      *(new_storage + i) = val;  // pointer offset notation  common val
    //  new_storage[i] = val;    // pointer array notation 
   }
   return new_storage;
   //eg size=5 val=2  new_strg array=2 2 2 2 2 
}

void display(const int *const array, size_t size) 
{
    for (size_t i{0}; i < size; ++i)
    cout << array[i] << " ";        // pointer subscript notation
    cout << endl;
}
int main() 
{
    int *my_array =nullptr;
    size_t size;
    int val;
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> val;
    
    my_array = create_array(size, val);
    cout << "\n--------------------------------------" << endl;

    display(my_array, size);
    
    delete [] my_array;
    return 0;
}
