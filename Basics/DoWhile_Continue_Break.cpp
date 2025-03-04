#include <iostream>
#include<vector>
using namespace std;
int main()
{
    char repeat;  //variable to be used in while of do-while declared outside
    do
    {
        double w,h;
        cout<<"Enter width and height : \n";
        cin>>w>>h;
        double a=w*h;
        cout<<"Area is :"<<a<<endl;

        //like we have case in do..so use selection inside to take input
        cout<<"Do you want to calculate 1 more..Continue(Y/N)\n";
        cin>>repeat;

    } while (repeat=='Y'||repeat=='y');
    cout<<"Come again..Thanks.>!";

    // char selection{};

    // do
    // {
    //     cout << "\n----------------\n";
    //     cout << "1. Do this" << endl;
    //     cout << "2 .Do that " << endl;
    //     cout << "3. Do something else" << endl;
    //     cout << "Q. Quit" << endl;
    //     cout << "\nEnter your selection: ";
    //     cin >> selection;

    //     if (selection == '1')
    //         cout << "You chose 1 - doing this" << endl;
    //     else if (selection == '2')
    //         cout << "You code 2 - doing that" << endl;
    //     else if (selection == '3')
    //         cout << "You code 3 - Do something else" << endl;
    //     else if (selection == 'q' || selection == 'Q')
    //         cout << "You code 4- Quit" << endl;
    //     else
    //         cout << "Invalid choice";

    // } while (selection != 'q' && selection != 'Q');

    // cout << "\nQuiting......";

    //using continue and break  chindi concept
    vector<int> values={1,2,-1,3,-1,-99,7,8,9};
    for(auto val:values)
    {
        if(val==-99)  //loop stops at -99
        break;
        else if(val==-1)
        continue;    //loop control transfer to for loop again without looking for next else..one time only
        else
        cout<<"\n"<<val<<endl;
    }

    
        return 0;
}
