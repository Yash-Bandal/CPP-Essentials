/*
Problem Statement:
Input number of cents from the user and find how much dollar , quarter dime, nickel he can have ..and also give remaining amount left with him
*/

#include <iostream>
using namespace std;
int main()
{
    int cents;
    const int dollar_val = 100;
    const int quarter_val = 25;
    const int Dime_val = 10;
    const int Nickel_val = 5;

    cout << "You Have How many cents" << endl;
    cin >> cents;

    int balance;
    int dollar, quarter, Dime, nickel;

    dollar = cents / dollar_val;
    balance = cents % dollar_val;
    cout << "Dollar :" << dollar << endl;
   // cout << "Balance :" << balance << endl;

    quarter = balance/ quarter_val;
    balance%=quarter_val;  //alternative
    cout << "Quarter :" << quarter << endl;
    //cout << "Balance :" << balance << endl;

    Dime = balance/ Dime_val;
    balance-=Dime*Dime_val;
    cout << "Dime :" << Dime << endl;
    //cout << "Balance :" << balance << endl;

    nickel = balance / Nickel_val;
    balance-=nickel*Nickel_val;
    cout << "Nickel :" << nickel << endl;
   // cout << "Balance :" << balance << endl;
    cout << "Penny :"<<balance<< endl;

    cout<<"Total :"<<dollar*dollar_val +quarter*quarter_val +Dime*Dime_val +nickel*Nickel_val +balance;
    return 0;
}
