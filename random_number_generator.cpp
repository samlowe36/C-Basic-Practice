#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    long elapsed_seconds = time(0); //this function calls the number of seconds elapsed from Jan 1 1970 to current. so it is always changing
    srand(elapsed_seconds); //srand function stands for seed random. it seeds the random value. using our time variable for this ensures a different seed every time
    // a faster and more cincise way of doing this is to simply do srand(time(0)) and not worry with the elapsed_time variable
    int number = rand() % 10; //by default this will return the same "random" value every time, unless the seed is changed
    //using mod operator in this way divides the random number by 10 and gives us the remainder, making the random value much smaller (0-9)
    cout << number;
    return 0;
}