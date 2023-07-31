#include <iostream>

using namespace std;

int main() {
    double price = 99.99;
    float interest_rate = 3.67F; //f at the end can be upper or lower but is needed so compiler knows this is a float, not a double
    long file_size = 90000L; // L at the end can be upper or lower but is needed so the compiler knows this is a long, not a double
    char letter = 'a'; // char's use single quotes, not double quotes like a string 
    bool is_valid = false;

    //int number {1.2}; //brace initialization is helpful because if empty it will initialize to value of 0.
    //if a brace initializer is used like above, it will give an error that the wrong type was used, which can be helpful
    return 0;
}