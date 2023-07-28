#include <iostream>

/*int main() { //math operator practice
    int x = 10;
    double x1 = 10;
    int y = 3;
    int z = x + y;
    int z1 = x - y;
    int z2 = x * y;
    int z3 = x / y; //only returns 3 as it is using integers
    double z4 = x1 / y; //returns the correct 3.33 as it uses doubles
    int z5 = x % y; //returns the remainder of division. in this case it would be 1

    std::cout << z5;
    return 0;
} */

int main() { // incrementing practice
    int x = 10;
    //x = x + 5; // will return x as 15
    //x = x * 5; // will return x as 50
    //x++; //shortened version of x = x + 1
    //int y = x++; // x = 11, y = 10
    int z = ++x; // x = 11, z = 11 (assuming above line is commented out)

    std::cout << x;
    return 0;
}