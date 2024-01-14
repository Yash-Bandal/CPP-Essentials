
#include<iostream>
using namespace std;

int *apply_all(const int *const arr1,size_t n1,const int *const arr2,size_t n2);
void print(const int *const arr,size_t n);

int *apply_all(const int *const arr1,size_t n1,const int *const arr2,size_t n2)
{
    int *new_arr=nullptr;
    new_arr=new int[n1*n2];
    int k=0; //k=position of new third array
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            new_arr[k]=arr1[j]*arr2[i];
            k++;
        }
    }
    return new_arr;
}

void print(const int *const arr,size_t n)
{
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int main()
{
    int size1=5;
    int size2=3;
    int array1[]={1,2,3,4,5};
    int array2[]={10,20,30};
   
    cout << "arr 1: ";
    print(array1, size1);
    cout<<endl;

    cout << "arr 2: ";
    print(array2, size2);
    cout<<endl;
    
    int *results=apply_all(array1,size1,array2,size2);
    int res_size={size1*size2};
    
    cout<<"Result:";
    print(results,res_size);
    delete[] results;
    
    return 0;
}

/*
For the first iteration of the inner loop (j = 0):

new_arr[k] = arr1[j] * arr2[i]; translates to new_arr[k] = 1 * 10;, so new_arr[k] is assigned the value 10.
Increment k to move to the next position in new_arr.
For the second iteration of the inner loop (j = 1):

new_arr[k] = arr1[j] * arr2[i]; translates to new_arr[k] = 2 * 10;, so new_arr[k] is assigned the value 20.
Increment k to move to the next position in new_arr.
This process continues until the inner loop completes all iterations for the given i (assuming it's the first iteration of the outer loop). 
The result is the first set of products for the given combination of elements from arr1 and arr2.
*/























