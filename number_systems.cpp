#include <iostream>

using namespace std;

int main() {
    //int number = 0b11111111; // indicates binary and prints 255
   // int number = 0xFF; //indicates hexadecimal and prints 255. hexadecimal is not case sensitive
   unsigned int number = -255; // unsigned keyword makes it so that something cannot be negative. usually not used
    cout << number;
    return 0;
}