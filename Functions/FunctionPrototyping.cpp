// Section 11
// Function Prototypes
// Area of Circle and Volume of a Cylinder
#include <iostream>

using namespace std;

// Function prototypes
double calc_volume_cylinder(double radius, double height); //optional name -- double calc_volume_cylinder(double , double )
double calc_area_circle(double);  //no compulsion to write name of var
// function prototypes only care about type and not the variable name
//that is either double..or double radius
// but for best practice for documentation, include the variable name as well
void area_circle();
void volume_cylinder();

const double pi = 3.14159;

int main() {
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_volume_cylinder(double radius, double height) {
   // return pi *radius * radius * height;
   return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}


//normallly we write this in main..but try using main only for calling.
void area_circle() {
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}



//varient 2

#include <iostream>

using namespace std;

// Function prototypes
void calc_volume_cylinder(double radius, double height); //NRetWArg
double calc_area_circle(double); 

void area_circle();
void volume_cylinder();

const double pi = 3.14159;

int main() 
{
    //WRNA
    area_circle();
    volume_cylinder();
   
    return 0;
}

void calc_volume_cylinder(double radius, double height)
{ //NRWA always needs a function to initialize
    // double radius {};
    // double height {};  dobt declare this in no returntype with argument
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    
    double result= calc_area_circle(radius) * height;
    
    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << result << endl;
  
}


double calc_area_circle(double radius)
{ 
  //WRWA
    return pi * radius * radius;
}

void area_circle()
{
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    //NRNA..mostly used..only declare or define entire
    double radius {};
    double height {};
    calc_volume_cylinder(radius, height); // Call the calc_volume_cylinder function
}


