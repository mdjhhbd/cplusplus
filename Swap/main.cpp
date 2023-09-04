#include <iostream>
using namespace std;

int main () {
    int a =100, b=105;

    cout << "a = " << a << endl<< "b = " << b << endl << "Swap result is: " << endl;
    a +=b;
    b -=a;
    a +=b;
    b =-b;
    cout << "a = " << a << endl << "b = " << b << endl;

    return 0;
}
