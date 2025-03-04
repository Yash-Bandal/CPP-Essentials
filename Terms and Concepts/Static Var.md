# Static Variables in C++

## What is a Static Variable?
A `static` variable inside a function retains its value between function calls, while a `static` variable inside a class is shared among all objects of the class.

---

## Static Variable Inside a Function
```cpp
#include <iostream>
using namespace std;

void counter() {
    static int count = 0;  // Retains value between function calls
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
```
### Output:
```
Count: 1
Count: 2
Count: 3
```
📌 **Use Case:** Used for maintaining state across function calls (e.g., counters, caching).

---

## Static Variable Inside a Class
```cpp
class Demo {
public:
    static int count;  // Declaration of static variable
    Demo() { count++; }
};

int Demo::count = 0;  // Definition of static variable

int main() {
    Demo d1, d2, d3;
    cout << "Total Objects: " << Demo::count << endl;
    return 0;
}
```
### Output:
```
Total Objects: 3
```
