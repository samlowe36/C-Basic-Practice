#include <iostream>

using namespace std;

int main() {
    int number = 1'000'000; //can use single quotes as commas for large numbers
    short another = number; //narrows the value down to the limit of a short
    cout << another;
    return 0;
}