  //noarg calls 3 arg// Section 13
// Delegating Constructors
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   string name;
   int health;
   int xp;
public:
// Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player {"None",0,0}   //noarg calls 3 arg
    {
        cout << "No-args constructor" << endl;  
    }

Player::Player(string name_val) 
   : Player {name_val,0, 0}  {
           cout << "One-arg constructor" << endl;
}
  
Player::Player(string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
}

int main() {
    
    Player empty;
    cout<<endl;
    Player yash {"yash"};
    cout<<endl;
    Player lala", 100, 55};
    
    return 0;
}
