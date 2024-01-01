#include<iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, num3;

    // Input
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    // Calculate sum
    int sum = num1 + num2 + num3;

   //avg
//    double average;
   
  
    // // Output
    // cout << "Sum: " << sum << endl;
    // cout << "Average: " <<(average=sum/3)<< endl;    
    // cout << "Average: " <<static_cast<double>(average=sum/3)<< endl;    //wrong syntax
    // cout << "Average: " <<static_cast<double>(sum)/3<< endl;    //correct   (sum/3 ) also wrong 
    // cout << "Average: " <<static_cast<double>(average)<< endl;  //also wrong id average declared as sum/3
    // cout << "Average: " <<static_cast<double>(sum/3)<< endl;  //also wrong

    double average = static_cast<double>(sum) / 3;
    cout << "Average: " << average << endl;

    return 0;
}
