//Factorial Recursive

//use long long if needed
#include<iostream>
using namespace std;

int fact(int n)  //eg 5 =1*2*3*4*5
{
    int result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

int recursivefact(int n) //eg 5 =5*4*3*2*1
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
        return n * fact(n-1);
    }
}

int main()
{
    int num;
    cout << "Enter Num" << endl;
    cin >> num;
    int res = fact(num);
    cout << "\nFactorial of " << num << " is " << res << endl;
    
    int res2 = recursivefact(num);
    cout << "\nRecursive Factorial of " << num << " is " << res2 << endl;
    return 0;
}


//________________________________________________________________________________//

//Finonacci Recursive 
#include<iostream>
using namespace std;
int fibo(int);
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
    return 1;
    }
    else
    {
     return(fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int n;
    cout<<"Enter Number of elements in the series"<<endl;
    cin>>n;
    int res;
    for(int i=0;i<n;i++)
    {
        cout<<fibo(i)<<" ";
    }
    return 0;
}

//non recursive
#include<iostream>
using namespace std;

void printFibonacciSeries(int n) 
{
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) 
    {
        if (i <= 1) 
        {
            nextTerm = i;
        } 
        else 
        {
            nextTerm=t1+t2;
            t1 = t2;  
            t2 = nextTerm;
        }
        cout << nextTerm << " ";
    }
}
/*
shift term forward..
eg first nT=0+1 
         t1=t2   t1 is now 1 and 
         t2=nT ie t2=1
         
then nT=1+1
t1=t2==1
t2=nT=2

then nT=3......
*/

int main() {
    int n;
    cout << "Enter the number of elements in the series: ";
    cin >> n;

    printFibonacciSeries(n);

    return 0;
}


//_________________________________________________________________________//

//Reverse number recursive 
#include <iostream>
using namespace std;

int reverseDigits(int num, int reversed)
{
    if (num == 0) 
    {
        return reversed;
    }
    int lastDigit = num % 10;
    reversed = reversed * 10 + lastDigit;

    return reverseDigits(num / 10, reversed);
}

int main() 
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the input is negative and handle it accordingly
    if (num < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Exit with an error code
    }
    int reversed = reverseDigits(num, 0);
    cout << "Reversed number: " << reversed << endl;

    return 0; // Exit successfully
}

//______________________________________________________________________________________//
