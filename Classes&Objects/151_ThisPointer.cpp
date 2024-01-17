#include <iostream>
using namespace std;
class MyClass {
    private:
    int x=10;
public:
    void printAddress() {
        cout << "Object address: " << this << endl;
    }
     void printValue() {
        cout << "Object address: " << this->x << endl;
    }
};

int main() {
//  cout<<this->; error outside class
    MyClass obj1, obj2;

    // Calling member function using the object
    obj1.printAddress();
    obj2.printValue();

    return 0;
}





//==
#include <iostream>
using namespace std;
class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Member function to increment the count
    void increment()
    {
        this->count++;
        
    }
 

    // Member function to display the count
    void displayCount()
    {
        cout << "Count: " << this->count << endl;
    }
};

int main() {
    // Creating a Counter object
    Counter counter;
    // Incrementing and displaying the count
    counter.increment();
    counter.displayCount();

    // Incrementing again and displaying the count
    counter.increment();
    counter.displayCount();

    return 0;
}

