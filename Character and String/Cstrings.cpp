#include <iostream>
#include <iomanip>
#include <string>   // important!

using namespace std;    // or use std:: 

int main() {
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         // Apple
    string s6 {s1, 0, 3};   // App
    string s7 (10, 'X');    // XXXXXXXXXX
    
    cout << s0 << endl;                  // No garbage
    cout << s0.length() << endl;     // empty string
    
// ========== Initialization ========== 
    cout << "\nInitialization" << "\n------------------------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;
    
// ========== Comparison ========== 
// https://en.cppreference.com/w/cpp/language/ascii
    cout << "\nComparison" << "\n------------------------------------------" << endl;
    cout << boolalpha;      // display true or false
    cout << s1  << " == " << s5 << ": " << (s1 == s5) << endl; 		            // True     Apple == Apple
    cout << s1  << " == " << s2 << ": " << (s1 == s2) << endl;	            	// False    Apple != Banana
    cout << s1  << " != " << s2 << ": " << (s1 != s2) << endl;		            // True     Apple != Banana
    cout << s1  << " < " << s2 << ": " << (s1 < s2) << endl;;		            // True     Apple < Banana      since A comes before B in ascii table, A is smaller than B
    cout << s2  << " > " << s1 << ": " <<(s2 > s1) << endl;		                // True     Banana > Apple      since A comes before B in ascii table, A is smaller than B
    cout << s4  << " < " << s5 << ": " <<(s4 < s5) << endl;		                // False    apple > Apple       since A comes before a in ascii table, A is smaller than a
    cout << s1  << " == " << "Apple" << ": " <<(s1 == "Apple") << endl;;	    // True     Apple == Appless

// ========== Assignment ========== 
    cout << "\nAssignment" << "\n------------------------------------------" << endl;

    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;    // Watermelon
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;    // Watermelon

    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;    // Frank

    s3[0] = 'C';    // Change the first character in s3 to 'C'
    cout << "s3 change first letter to 'C': "  << s3 << endl;   // Crank
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P': "  << s3 << endl;   // Prank

// ========== Concatenation ========== 
    s3 = "Watermelon";
    cout << "\nConcatenation" << "\n------------------------------------------" << endl;

    s3 =  s5 + " and " + s2 + " juice";     // Apple and Banana juice
    cout << "s3 is now: " << s3 << endl;    // Apple and Banana Juice
    
//  s3 = "nice " + " cold " + s5 + "juice";         // Compiler error

// ========== for loop ========== 
    cout << "\nLooping" << "\n------------------------------------------" << endl;
    
    s1 = "Apple";
    for (size_t i {0}; i < s1.length(); ++i) 
        cout << s1.at(i);      //  or s1[i]    Apple
    cout << endl;
    
// ========== Range-based for loop ========== 
    for (char  c: s1)
        cout << c;     // Apple 
    cout << endl;
         
         
// ========== Substring ========== //substr(position , length)..not (strt,end)
    cout << "\nSubstring" << "\n------------------------------------------" << endl;
    s1 = "This is a test";

    cout << s1.substr(0,4) << endl;	    // This
    cout << s1.substr(5,2) << endl;	    // is
    cout << s1.substr(10,4) << endl;   	// test


// ========== Erase ========== 
    cout << "\nErase" << "\n------------------------------------------" << endl;
  
    s1 = "This is a test";
    s1.erase(0,5);     // Erase This from s1 results in "is a test"
    cout << "s1 is now: " << s1<< endl;     // is a test

// ========== getline ========== //takes full line as input..including space....full sentence
     cout << "\ngetline" << "\n------------------------------------------" << endl;

    string full_name {};
    
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << "Your full name is: " << full_name << endl;
    
// ========== Find ==========   position = string.find(word_in_that_string)
    cout << "\nfind" << "\n------------------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word <<  " not found" << endl;
    cout << endl;
    return 0;
}
/*
How to Imagine npos:
You can think of npos as a marker for "no position" or "an unreachable index", sitting infinitely far outside the string. Here's a mental model:

Imagine a string like this:
Hello
Indexes: 0 1 2 3 4

If you ask for npos, you’re saying,
“I’m not pointing at any of these indexes; I’m pointing to an invalid position beyond the string.”

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    size_t pos = str.find('z'); // 'z' doesn't exist in the string

    cout << "Value of npos: " << string::npos << endl;
    cout << "Position returned by find(): " << pos << endl;

    if (pos == string::npos) {
        cout << "'z' was not found in the string.\n";
    }

    return 0;
}

Output :
Value of npos: 18446744073709551615
Position returned by find(): 18446744073709551615
'z' was not found in the string.
