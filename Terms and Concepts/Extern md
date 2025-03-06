# Extern Keyword in C++

## Introduction
The `extern` keyword in C and C++ is used to declare a variable or function that is defined in another file or scope. It tells the compiler that the variable or function exists but is defined elsewhere. This is primarily used for **global variable sharing across multiple files**.

---
## **Usage of `extern`**

### **1. Extern with Global Variables**
`extern` allows a variable to be declared in one file and used in another.

#### **Example:** Sharing a global variable across files
**File1.cpp:**
```cpp
#include <iostream>
using namespace std;

int count = 10; // Definition of count
```

**File2.cpp:**
```cpp
#include <iostream>
using namespace std;

extern int count; // Declaration of count from File1.cpp

int main() {
    cout << "Count: " << count << endl;
    return 0;
}
```

💡 **Key Point:** The variable `count` is defined in `File1.cpp` but accessed in `File2.cpp` using `extern`.

---

### **2. Extern with Functions**
`extern` can also be used for function declarations, allowing a function defined in one file to be used in another.

#### **Example:**
**File1.cpp:**
```cpp
#include <iostream>
using namespace std;

void display(); // Function declaration

int main() {
    display();  // Call function from another file
    return 0;
}
```

**File2.cpp:**
```cpp
#include <iostream>
using namespace std;

void display() {  // Function definition
    cout << "Hello from display function!" << endl;
}
```

💡 **Key Point:** The function `display()` is defined in `File2.cpp` and used in `File1.cpp`.

---

### **3. Extern with `C` Linkage (C++ Only)**
When using C++ and linking with C libraries, `extern "C"` is used to prevent C++ name mangling.

#### **Example:**
```cpp
extern "C" void cFunction();
```
This tells the compiler that `cFunction()` is a **C function**, allowing interoperability between C and C++.

---

## **Key Points to Remember**
✔ `extern` is used for variable/function declarations, not definitions.  
✔ Required when **sharing global variables across multiple files**.  
✔ `extern "C"` is used for **C++ to C function calls**.  
✔ **No memory is allocated** for `extern` variables; they must be defined elsewhere.  

---
## **Conclusion**
The `extern` keyword is a powerful tool for modular programming, allowing separate compilation of multiple source files while maintaining shared global variables and functions. It is crucial in large projects to ensure better **code organization, reusability, and linking across different files**.

🚀 **Best Practice:** Avoid excessive use of global variables with `extern`; prefer encapsulation to keep code maintainable!

