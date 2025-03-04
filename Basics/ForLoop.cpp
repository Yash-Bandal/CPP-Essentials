#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // //for loop
    // cout<<"Using a comma operator :\n";
    // for(int i=1,j=5 ; i<=5,j<=9 ;i++,j++)  //even if we dont applt j<=9..we get same answer
    // {
    //     cout<<i<<"*"<<j<<":"<<(i*j)<<endl;
    // }
    // cout<<"loop within\n";
    // for(int m=1;m<=5;m++)                 //different than above 
    // {                             //for withing for is different than using a , operator
    //     for(int n=11;n<=15;n++)
    //     {
    //         cout<<m<<"*"<<n<<":"<<(m*n)<<endl;
    //     }
    // }



//     //endless
//    for(;;)
//    cout<<"This run Infinite\n";

//printing a square of numbers
for(int i=1;i<=100;i++)
{
    cout<<i;
    // if(i%10==0)
    // {
    //     cout<<endl;
    // }
    // else
    // {
    //     cout<<" ";
    // }

    cout<<((i%10==0)?"\n" : " ");  //same as above
}



//printing a vector
vector <int> vect_var={10,20,30,40,50}; //
for(int i=0;i<vect_var.size();i++)
{
    cout<<vect_var[i]<<endl;  //you forger var[i]
}

    return 0;
}
