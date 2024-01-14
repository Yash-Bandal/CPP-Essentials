// Section 13
// Accessing Class Members
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl; 
    }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal) 
    {
        balance += bal; cout << "In deposit :"<<balance << endl; 
        
    }
    bool withdraw(double bal)
    {
        balance -= bal; cout << "In withdraw :"<<bal<<" Final :"<<balance << endl;  
    }
    
};

int main() 
{
    Account Lala_account;
    
    //Method access
    Lala_account.name = "Lala's account";
    Lala_account.balance = 5000.0;
    
    Lala_account.deposit(1000.0);
    Lala_account.withdraw(500.0);
    
    //Var obe access
    Player Lala;
    Lala.name = "Lala";
    Lala.health = 100;
    Lala.xp = 12;
    Lala.talk(" \"Kem cho...!\" " );
    
    //Pointer access
    Player *enemy = new Player;
    (*enemy).name = "Enemy";   //dereference* pointer then dot meth
    (*enemy).health = 100;
    (*enemy).xp = 15;    
    enemy->xp = 15;  //no need of deref in ->
    
    enemy->talk(" \"Ram ram bhai saryane! \" ");
    


    return 0;
}
