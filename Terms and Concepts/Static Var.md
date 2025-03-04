# Static Variables in C++

## What is a Static Variable?
A `static` variable in C++ has a property of **preserving its value** even after it goes out of scope. It retains its last assigned value when the function or class member is accessed again.

### Key Properties:
- It is initialized only once and retains its value between function calls.
- It has a **lifetime throughout the program execution**.
- In a class, it is **shared among all instances**.
- It is stored in the **data segment** of memory instead of the stack.

---

## 1️⃣ Static Variable Inside a Function
When a `static` variable is declared inside a function, its value persists across multiple function calls.

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
📌 **Use Case:** Used for maintaining state across function calls, such as counters, caching, and maintaining history.

---

## 2️⃣ Static Variable Inside a Class
A `static` variable inside a class is shared among all objects of the class and does not belong to any specific instance.

```cpp
class Demo {
public:
    static int count;  // Declaration of static variable
    Demo()
    {
      count++;
    }
};

int Demo::count = 0;  // Definition of static variable..this is very important nd different from normal func

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
📌 **Use Case:** Used for **counters**, **tracking active instances**, and **global configurations**.

---

## 3️⃣ Static Member Functions
Static functions in a class can only access static variables. They can be called without creating an object.

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    static int count;
    static void showCount() { 
        cout << "Count: " << count << endl; 
    }
};

int Demo::count = 5;

int main() {
    Demo::showCount(); // Call static function without an object
    return 0;
}
```
### Output:
```
Count: 5
```
📌 **Use Case:** Used for **utility functions** that do not depend on instance-specific data.

---

## 4️⃣ Static Functions in a File (File Scope)
A `static` function in a file is restricted to that file only. This is used to limit access and avoid conflicts in modular programming.

```cpp
static void helper() {
    cout << "This is a static function" << endl;
}

int main() {
    helper();
    return 0;
}
```
📌 **Use Case:** Used for **file-local functions** that should not be accessed outside the file.

---

## 🏆 Summary Table

| Use Case | Scope | Lifetime | Accessible By | Example |
|----------|------|---------|-------------|---------|
| **Static Variable (Function)** | Inside function | Entire program | Only within function | Counters, Memoization |
| **Static Variable (Class)** | Inside class | Entire program | All objects of class | Object counters |
| **Static Function (Class)** | Inside class | Entire program | Only static members of class | Utility functions |
| **Static Function (File-level)** | File scope | Entire program | Only within the file | Restricting access |

---

This covers all aspects of `static` in C++. 🚀 Let me know if you need additional examples!
