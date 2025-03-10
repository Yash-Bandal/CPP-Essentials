// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    // attributes
    string name ="Player";
    int health =100;
    int xp =3;
    
    // methods
    void talk(string);
    bool is_dead();
};

class Account 
{
    // attributes
    string name ="Account";
    double balance =0.0;
    
    // methods
    bool deposit(double);
    bool withdraw(double);
    
};


int main()
{
    Account frank_account;
    Account jim_account;  //object declaration
    
    
    Player frank;    //object declaration
    Player hero;
    
    Player players[] {frank, hero};  //object_array dec
    
    vector<Player> player_vec {frank};  //object vector dec
    player_vec.push_back(hero);
    
    
    Player *enemy =nullptr;  //object pointer dec
    enemy = new Player;
    
    delete enemy;

    return 0;
}
