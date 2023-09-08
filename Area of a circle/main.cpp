#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const long double pi =  3.141592653589793238462643383279502884197; // This is The pi valu
    double r;

    // input Radius Valu
    cout << "Enter the valu of Radius 'r': ";
    cin >> r;

    // Output the Result
    cout << "The Area of a Circle is: " << pi*pow(r,2) << endl;
    return 0;
}
