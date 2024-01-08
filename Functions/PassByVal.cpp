// Section 11
// Function Parmameters
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v)
{
    for (auto s: v) 
    cout << s << " ";
    cout << endl;
}

int main() {
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);  //set values
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges); // we expected ..cleared vector..but no clear
    
    cout << endl;
    return 0;
}




//DONT CONFUSE........................................................

//NORMAL WE REQUIRE
#include <iostream>
using namespace std;

void addAndPrintSum(int num1, int num2)         //perform -cout result
//you think..here how we are not using '&'...note..changes or performance is reflected in result.
//.just value change is not visible
//eg=set num1=50;
{
    cout << "Sum: " << num1 + num2 << endl;
}

int main()                                    //cin 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    addAndPrintSum(a, b);
    return 0;
}

//CHANGE 1 Value
#include <iostream>
using namespace std;

void addAndPrintSum(int num1, int num2)         
{
    num1=50;
    num2=50;
    cout << "Sum: " << num1 + num2 << endl;
}

int main()                                    //cin 
{
    int a=70;
    int b=70;
    addAndPrintSum(a, b);   //output is 100..50+50 not 70+70 as local preference..
                            //conclusion is that a and b remain 70 even after call
    cout<<"a="<<a<<" "<<"b="<<b<<endl;    //a=70 and b=70 not a=50 b=50
    
    return 0;
}

//CHANGE 1 Reference
#include <iostream>
using namespace std;

void addAndPrintSum(int &num1, int &num2)      //reference   
{
    num1=50;
    num2=50;
    cout << "Sum: " << num1 + num2 << endl;
}

int main()                                    //cin 
{
    int a=70;
    int b=70;
    addAndPrintSum(a, b);   //output is 100..50+50 not 70+70 as local preference..  no change to performance
                            //conclusion is that a and b change  after call
    cout<<"a="<<a<<" "<<"b="<<b<<endl;    //a=50 and b=50 not a=70 b=70  CHANGE MADE IN REFERENCE
    
    return 0;
}
    


