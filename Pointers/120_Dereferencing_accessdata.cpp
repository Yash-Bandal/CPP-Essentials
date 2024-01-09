// Section 12
// Dereferencing
//pointers are variables at last so can be changed
//Focus specially on stringvector pointers..complex data to be ppinted but simple pointers

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    
    int score {100};
    int *score_ptr =&score;  //pointing loc

    // Dereference score_ptr
    cout << *score_ptr << endl;		// Output: 100

    // Dereference score_ptr and put value 200 inside
    *score_ptr = 200;
    
    // Dereference score_ptr
    cout << *score_ptr << endl;		// Output: 200
    cout << score << endl; 			// Output: 200


    cout << "\n------------------------------" << endl;
    double high_temp =100.7;
    double low_temp =37.4;			       
    double *temp_ptr =&high_temp;    

    cout << *temp_ptr << endl;   	// Output: 100.7    	    
    temp_ptr = &low_temp;           // Change where pointer is pointing to
    cout << *temp_ptr << endl;   	// Output: 37.4   	    


    cout << "\n------------------------------" << endl;

    string name ="Yash";
    // Initialize string_ptr to point at the location of name
    string *string_ptr =&name;

    // Dereference string_ptr with var
    cout << *string_ptr << endl;   	// Output: Yash   
    name = "Pandya"; 	            // Change variable value directly
    
     // Dereference string_ptr with ptr itself
    cout << *string_ptr << endl;   	// Output: Pandya
    *string_ptr = "Chettri";        // Dereference string_ptr and put value Chettri inside
    cout << *string_ptr << endl;   	// Output: Chettri



    cout << "\n------------------------------" << endl;
    
    vector<string> strnames ={"Amar", "Akbar", "Anthony"};
    vector<string> *vector_ptr =nullptr;
    
    vector_ptr = &strnames;

    cout << "&strnames:\t" << vector_ptr << endl;                // Output: address
    
    cout << "First strname: " << (*vector_ptr).at(0) << endl;    // Output: Amar
    
    cout << "strnames: ";
    for (auto strname: *vector_ptr)  
        cout << strname << " ";
    cout << endl;
    
    cout << endl;
    return 0;
}
