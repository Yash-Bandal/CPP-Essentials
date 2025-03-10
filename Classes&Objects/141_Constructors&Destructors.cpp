// Section 13
// Constructors and Destructors

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    // Overloaded Constructors
    Player() { 
        cout << "No args constructor called"<< endl;
    }
    
    Player(std::string name) { 
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called"<< endl; 
    }
    // Destructor
    ~Player() { 
        cout << "Destructor called for " << name << endl; 
    }
};

int main() {

    {
        Player slayer;
        slayer.set_name("Slayer");
    }
     //if {} not used here..destructor will be called at end
    cout<<endl;
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    cout<<endl;
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    cout<<endl;
    
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    cout<<endl;
    
    return 0;
}

//op
/*
/tmp/5o8WOClCkv.o
No args constructor called
Destructor called for Slayer

[called destructor here as object goes out of scope]

No args constructor called
String arg constructor called
Three args constructor called
Destructor called for Villain
Destructor called for Hero
Destructor called for Frank

No args constructor called

Three args constructor called
Destructor called for EnemyDestructor called for Level Boss

*/


// Section 13
// Constructors and Destructors

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    // Overloaded Constructors
    Player() { 
        cout << "No args constructor called"<< endl;
    }
    
    Player(std::string name) { 
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called"<< endl; 
    }
    // Destructor
    ~Player() { 
        cout << "Destructor called for " << name << endl; 
    }
};

int main() {

    
        Player slayer;
        slayer.set_name("Slayer");
    
     //if {} not used here..destructor will be called at end
    cout<<endl;
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    cout<<endl;
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    cout<<endl;
    
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    cout<<endl;
    
    return 0;
}

/*
/tmp/5o8WOClCkv.o
No args constructor called

No args constructor called
String arg constructor called
Three args constructor called
Destructor called for Villain
Destructor called for Hero
Destructor called for Frank

No args constructor called

Three args constructor called
Destructor called for Enemy
Destructor called for Level Boss

Destructor called for Slayer
[called destructor here as object goes out of scope]


*/
