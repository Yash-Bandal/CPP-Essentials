// Section 13
// Copy Constructor
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
//methods
    string get_name()
    {
        return name; 
    }
    int get_health() 
    {
        return health; 
    }
    int get_xp() 
    {
        return xp;
    } 
    //default 
    Player(string name_val ="None", int health_val = 0, int xp_val = 0);
    
    // Copy constructor
    Player(const Player &source);
    // Destructor
    ~Player()
    {
        cout << "Destructor called for: " << name << endl; 
    }
};

//we used like this
/*
ClassName(int val1,int val2):val1(v1),val2(v2) {}
*/
Player::Player(string name_val, int health_val, int xp_val) 
    : name(name_val), health(health_val), xp(xp_val) 
    {
            cout << "Three-args constructor for " + name << endl;
    }

Player::Player(const Player &source)
    // : name(source.name), health(source.health), xp{source.xp} {
    //    or use delegating constructor:
       : Player {source.name, source.health, source.xp}
    {
        cout << "Copy constructor - made copy of: " << source.name << endl; 
    }

// pass by-value (copy)  
void display_player(Player obj)
{
    cout << "Name: " << obj.get_name() << endl;
    cout << "Health: " << obj.get_health() << endl;
    cout << "XP: " << obj.get_xp() << endl;    
}

int main() {    
    Player empty {"XXXXXX", 100, 50};
    cout<<endl;
    
    Player my_new_object {empty}; //pass obj
    cout<<endl;
    
    display_player(empty);
    cout<<endl;
    
    Player yash {"yash"};
    cout<<endl;
    Player hero {"Hero", 100};
    cout<<endl;
    Player villain {"Villain", 100, 55};
    cout<<endl;
        
    return 0;
}
