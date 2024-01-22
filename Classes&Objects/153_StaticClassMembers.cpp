/*
Note: 
In C++, a static member function can only directly access static data members and other static member functions of a class. It cannot directly access non-static (normal) data members or member functions.
*/
//Player.cpp
#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
   static int num_players;
   string name;
   int health;
   int xp;
public:
    string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() {return xp; } 
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player();
    
    static int get_num_players();
    // static functions are class functions.
    //      - only have access to static variables
    //      - do not have access to i.e. name, health, xp
    
};

#endif // _PLAYER_H_

//================================================================================


//Player.h
#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
   static int num_players;
   string name;
   int health;
   int xp;
public:
    string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() {return xp; } 
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player();
    
    static int get_num_players();
    // static functions are class functions.
    //      - only have access to static variables
    //      - do not have access to i.e. name, health, xp
    
};

//==============================================================================

// Section 13
// Static class members
#include <iostream>
#include "Player.h"

using namespace std;

// helper function
void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    display_active_players();           // Output: 0
    Player hero{"Hero"};
    display_active_players();           // Output: 1
    
    {
        Player frank{"Frank"};
        display_active_players();       // Output: 2
    }
  //as object goes out of scope..destructor defined to decrement
    display_active_players();           // Output: 1
    
    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();           // Output: 2
    delete enemy;
    display_active_players();           // Output: 1



    return 0;
}


#endif // _PLAYER_H_


