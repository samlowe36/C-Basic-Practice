#include <iostream>
using namespace std;

/*int main() {
    //cout << "Enter a value: "; //asks user to enter a value
    cout << "Enter values for x and y: ";

    double value;
    cin >> value; // cin takes user input
    cout << value;
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;
    return 0;
}*/

int main() {
    cout << "This program converts Fahrenheit to Celsius. Please enter a Fahrenheit temperature: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << "The temperature in celsius is " << celsius << " degrees.";
    return 0;
}