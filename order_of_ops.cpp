#include <iostream>

int main() {
    //double x = (1 + 2) * 3; // c++ follows pemdas order of operations. all languages are like this
    double x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);

    std::cout << z;
    return 0;
}