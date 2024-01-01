#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //! d vector
    int n;
    cout<<"How many elements you want\n"<<endl;
    cin>>n;
    vector <int> vec;
    int data;
    //input
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter Data in vector index "<<i<<endl;
        cin>>data;
        vec.push_back(data);
    }

    //print output
    cout<<"You vector has\n";
    for(auto var:vec)
    {
        cout<<var<<endl;
    }

    //histogram
    // for(auto i:vec) //
    // for(int i=1;i<=n;i++)   //ie 3 bars 3 lines down
    // {
    //     for(int j=0;j<i;j++)  //for each bar..how many - require is specifies here
    //     {
            
    //         cout<<"-";
    //     }
    //     cout<<endl;
    // }

     for(auto val:vec)   //ie 3 bars 3 lines down
    {
        for(int j=0;j<val;j++)  //for each bar..how many - require is specifies here
        {
            
            if(j%5==0)
            cout<<"*";
            else
            cout<<"-";
        }
        cout<<endl;
    }
cout<<endl;
    // int r,c;
    // cout << "How many elements you want in row\n";
    // cin >> r;
    // cout << "How many elements you want in col\n";
    // cin>>c;
         
    
    // vector<vector<int>> vec(r,vector<int>(c));
    // int data;
    // // input
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << "Enter Data in vector index " << i << endl;
    //         cin >> vec[i][j];
            
    //     }
    // }

    // // print output
    // cout << "You vector has\n";
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
          
    //         cout<<vec[i][j]<<" ";
            
    //     }
    //     cout<<endl;
    // }

    return 0;
}
