#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b\n";
    cin>>a>>b;
    cout<<"Calculationg..... "<<endl;
    int result;
    result=(a>b)?a:b;
    cout<<result<<"is Greater";

    int res2;
    res2=(a<b)? (a-b):(b-a);
    cout<<"\nResult 2 is compound operation a nd b :"<<res2;

    int n;
    string res3;
    cout<<"\nEnter n\n";
    cin>>n;
     res3=(n%2==0)?"even":"odd";
    cout<<n<<" is "<<res3;
    return 0;
}
