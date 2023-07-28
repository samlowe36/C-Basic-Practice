#include <iostream>

using namespace std; //defines std for use anywhere in code so we dont have to put std in multiple places

/*int main() { //practice walkthrough
    int x = 10;
    int y = 20;
    cout <<"x = " << x << endl // endl ends the line and creates a new line. no std needed due to using namespace above
         << "y = " << y;
    return 0;
}*/

int main() { // exercise
    double sales = 95000;
    const double state_tax = 0.04;
    const double county_tax = 0.02;
    double state_tax_amount = sales * state_tax;
    double county_tax_amount = sales * county_tax;
    double total_tax_amount = state_tax_amount + county_tax_amount;

    cout << "Total sales are $" << sales << " while state tax rate is " << state_tax
         << " and county tax rate is " << county_tax << endl << endl
         << "Total state taxed amount is $" << state_tax_amount << endl
         << "Total county taxed amount is $" << county_tax_amount << endl << endl
         << "Total taxed amount: $" << total_tax_amount;
    return 0;
}