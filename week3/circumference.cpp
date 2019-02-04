#include <iostream>
using namespace std;

double calculateCircumference(double radius);
const float PI = 3.14159265358979323846;

int main()
{
    int radius;
    double circumference;
    
    cout<<"Enter the radius a circle: ";
    cin >> radius;
    
    circumference = calculateCircumference(radius);
    cout << "The circumference of a circle with the radius of " << radius << endl;
    cout << "is: " << circumference << endl;
    return 0;
}

double calculateCircumference(double radius)
{
    double calculateCircumference;
    calculateCircumference = 2 * PI * radius;
    
    return calculateCircumference;
}
