# Functions vs Pointer functions
```cpp
int numFunc(){
 int num  = 10;
 return num;
}
```


```cpp
int* ptrFunc(){
  int* ptr = &var; 
    return &var;
   //or
   return ptr; 
}
```
