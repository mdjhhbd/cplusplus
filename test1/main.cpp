#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double sq(double number)
{
    return number*number;
}

int main()
{
    double n, i, j, r, pi=3.14159265358979323846;
    cin >> n;
    i=sq(sq(n));
    r=pi*sq(n);
    j=i-r;
    cout << j/4 << endl ;
    return 0;
}
