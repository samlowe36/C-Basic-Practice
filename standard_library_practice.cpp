#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double result = floor(1.2); // floor function is from cmath and rounds a value down
    cout << result << endl;

    double exponent = pow(2, 3); //pow function is from cmath and takes 2 values. first is the number and second is the exponent
    cout << exponent << endl;

    cout << "Please enter the radius of the circle: " << endl;
    double radius;
    cin >> radius;
    const double pi = 3.14; 
    double circle_area = pi * (pow(radius, 2));
    cout << "The area of the circle is " << circle_area << endl;
    return 0;
}