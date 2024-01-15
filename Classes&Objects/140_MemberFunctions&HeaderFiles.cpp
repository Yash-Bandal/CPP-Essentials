// Section 13
// Implementing member methods 1 
#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;
    
public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }
    
    // methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance-amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}


int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit Not allowed" << endl;
        
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    return 0;
}

//===========================================================
// Section 13
// Implementing member methods 2

//Account.h
#ifndef _ACCOUNT_H_   
#define _ACCOUNT_H_

class Account
{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};

//or Account.h #pragma once
#pragma once

class Account
{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};



//MainProg.cpp
//main.cpp

#include <iostream>
#include "Account.h"  //dont include account.cpp  use "" for local headers and <> for predefined headers

int main() {
    Account frank_account;
    frank_account.set_balance(1000.00);
    double bal = frank_account.get_balance();

    std::cout << bal << std::endl;              // Output: 1000
    return 0;
}


#endif
























#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit Not allowed" << endl;
        
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl; 
    
    return 0;
}
