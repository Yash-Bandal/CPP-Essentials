// Section 12
// Dynamic Memory
#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;              // allocate the int dynamically on the heap
    cout << int_ptr << endl;        // Output: address in the heap
    // Can use int_ptr now
    delete int_ptr;                 // release it
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];    // allocate the storage on the heap
    cout << temp_ptr << endl;       // use it
    // Memory leak if   temp_ptr = nullptr;
    // Now we lose the only way to access the memeory in the heap
    delete [] temp_ptr;             // release it
    
    cout << endl;
    return 0;
}


//try
#include<iostream>
using namespace std;
int main()
{
    int *ptr=nullptr;
    
    //entering heap........
    ptr=new int;
    
    cout<<"Pointer points address in heap ,which is :"<<ptr; //in heap not stack
    
    delete ptr;  //need Deallocation 
    //leaving heap.........
    
    
    //+-+-+-+-+-+-+-+-+-+-=-=-=-
    
    double *dblptr=nullptr;
    int size;
    
     cout<<"\nHow many doubles? :"<<endl;
     cin>>size;
          //while(true)  //check bad_alloc
     
     dblptr=new double[size];
     
     cout<<"\nPointer points address in heap of double ,which is :"<<dblptr;
     
     delete[] dblptr;
    
    return 0;
}







//-----------------------------------------------
#include<iostream>
using namespace std;

void PrintArr(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter size:" << endl;
    cin >> n;

    int testArr[n];

    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> testArr[i];
    }

    int *ptr = testArr;

    PrintArr(ptr, n);

    return 0;
}

//=======================================================
#include<iostream>
using namespace std;

void PrintArr(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
   
}
int main()
{
    int n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    int *ptr;
    
    ptr=new int[n];  
    
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    PrintArr(ptr,n);
    delete[] ptr;
    
   
    return 0;
}
