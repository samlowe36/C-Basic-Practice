#include <iostream>

using namespace std;

int main() { //exercise for swapping values in "a" and "b" without just re-initializing them
    int a = 1;
    int b = 2;
    int c = a; //create 3rd bucket that equals 1
    a = b; // make empty "a" bucket now equal 2
    b = c; // make "b" bucket now equal 1

    cout << b;
    cout << a;

    return 0;
}