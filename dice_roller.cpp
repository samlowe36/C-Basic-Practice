#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const short max_value = 6;
    const short min_value = 1;
    srand(time(0));
    short dice_roll = ((rand() % (max_value - min_value + 1)) + min_value);
    cout << dice_roll;
    return 0;
}