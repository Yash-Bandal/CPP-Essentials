
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























