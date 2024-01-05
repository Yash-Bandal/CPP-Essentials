/*
without argyment...cin perform that is take in input and perform inside

with argument.....always perform inside


mostly use 
with argument with returntype
double name(argument)

and 
without argument without return type
void name()

*/




//Function without Return Type and without Arguments:
#include <iostream>

using namespace std;

void getAndAddNumbers()   //cin -perforn -cout result    usually can create another function for perform 
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 << endl;
}

int main() {
    getAndAddNumbers();
    return 0;
}


//------------------------------------------------



//Function with Return Type and without Arguments:
#include <iostream>

using namespace std;

int addNumbers()      //cin- perform   ..the one that returns has no cout result
{
    int num1, num2; 
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    return num1 + num2;
}

int main()    //cout result
{
    cout << "Sum: " << addNumbers() << endl;
    return 0;
}


//--------------------------------------------------

//**//
//Function without Return Type and with Arguments:
#include <iostream>

using namespace std;

void addAndPrintSum(int num1, int num2)         //perform -cout result
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



//--------------------------------------------------


//Function with Return Type and with Arguments:
#include <iostream>

using namespace std;

int addNumbers(int num1, int num2)     //perform
{
    return num1 + num2;
}

int main()            //cin -cout result
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum: " << addNumbers(x, y) << endl;
    return 0;
}




//-------------------------------------------------

