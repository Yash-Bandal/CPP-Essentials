#include <iostream>
#include<vector>
using namespace std;
int main() 
{
  
 
vector<string> names={"Yash","Lala","Anna"};

 
for(auto &ele :names)  //Working 
{
    names.at(0)="ReflectedChange";
    cout<<ele<<endl;
}
cout<<endl;

vector<string> names2={"Yash2","Lala2","Anna2"};

for(auto ele :names2) //Not working
{
    names.at(0)="NotReflectedChange";
    cout<<ele<<endl;
}



cout<<"========================================================="<<endl;
cout<<endl;

vector<string> names3={"Yash3","Lala3","Anna3"}; 
cout<<"Here no reference used:"<<endl;
for(auto ele :names3)
{
    ele="YSL";       //changes the copy..so no change reflected down
    cout<<ele<<endl;
}
for(auto ele :names3)
{      
    cout<<ele<<endl;
}

cout<<endl;
//===============================================================
cout<<"Here reference used:"<<endl;
for(auto  &ele :names3)
{
    ele="YSL";       //changes the actual..so change reflected down
    cout<<ele<<endl;
}
for(auto ele :names3)
{      
    cout<<ele<<endl;
}

//=============================================================
vector<string> names4={"Yash4","Lala4","Anna4"}; 
cout<<"Use const so that no error of changing"<<endl;

// for(auto const &ele :names4)  ERROR CONST
// {
//     ele="YSL";       //changes the actual..so change reflected down
//     cout<<ele<<endl;
// }

for(auto const &ele :names4)
{      
    cout<<ele<<endl;
}


    return 0;
}




//=================================================================================

//declaring references
// Section 12
// References
// Please see the section 11 examples for references as function paramters
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int num {100};
    int &ref {num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num  = 200;
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;      // same as changing num directly because they are alias
    cout << "\n---------------------------------" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n---------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str : stooges)     
        str = "Funny";              // str is a COPY of the each vector element but not the actual
      
    for (auto str : stooges)        // No change
        cout << str << endl;
 
    cout << "\n---------------------------------" << endl;
    for (auto &str : stooges)       // str is a reference to each vector element
        str = "Funny";
     
    for (auto const &str : stooges)     // notice we are using const to protect stooges as read-only
        cout << str << endl;            // now the vector elements have changed
    
    cout << endl;
    return 0;
}
