#include<iostream>
using namespace std;
void print_arr(int arr[],size_t size);
//Prototypinh

void print_arr(int arr[],size_t size)  //use size_t integer type
{
    for(size_t i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter size of array :"<<endl;
    cin>>n;
    int my_arr[n];
    
    cout<<"Enter Array elements:";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element"<<(i+1)<<endl;
        cin>>my_arr[i];
    }
    cout<<"Your array is :"<<endl;
    print_arr(my_arr,n);
    return 0;
    
}




//Without const look at bug that may change output..to prvent it we use const
//not mandatory but make code more secure

// Arrays and functions
// Section 11
// Arrays and functions
#include <iostream>

using namespace std;

// Function prototypes
void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

// Function print_array
void print_array(int arr[], size_t size) {  // const
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
   arr[0] = 50000; // bug
}

// Function set_array
// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);          // goes to storage address instead of copying values
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);          
    print_array(my_scores, 5);
    
    cout << endl;
    return 0;
}


/*
op=
100 98 90 86 84 
100 100 100 100 100 
50000 100 100 100 100 //bug error element change to avoid this use const
*/


//WIth CONST

// Section 11
// Arrays and functions
#include <iostream>

using namespace std;

// Function prototypes
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

// Function print_array
void print_array(const int arr[], size_t size) {  // const
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
   arr[0] = 50000; // bug  //comment this out// arr[0] = 50000; to remove error
}

// Function set_array
// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);          // goes to storage address instead of copying values
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);          
    print_array(my_scores, 5);
    
    cout << endl;
    return 0;
}

/*
op=
 In function 'void print_array(const int*, size_t)':
 error: assignment of read-only location '* arr'
   16 |    arr[0] = 50000; // bug
      |    ~~~~~~~^~~~~~~

*/

