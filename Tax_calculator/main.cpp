#include <iostream>

using namespace std;

int main()
{
    double sales, s_tax, c_tax, a=1, total_tax;

    while (a=1){

    // get input salels for calculationg
    cout << "Give me a valu for Sales Today: ";
    cin >> sales;

    // Tax Rate
    const double state_tax_rate = 0.04;
    const double county_tax_rate = 0.02;

    // Print Total salels;
    cout << "Salels is :" << sales << endl;

    // Tax Rate Calculation
    s_tax = sales * state_tax_rate;
    c_tax = sales * county_tax_rate;
    total_tax = s_tax + c_tax;

    // Print Program
    cout << "The State Tax is : " << s_tax << endl;
    cout << "The County Tax is: " << c_tax << endl;
    cout << "The Total Tax is: " << total_tax<< endl << endl<< endl;

    return 0;

    }
}
