#include <iostream>

using namespace std;

int main()
{
    double x, y ,z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    if (x >= y && x >= z){
        cout << "Maximum: "<< x << endl;
    }
    else if (y >= x && y >= z){
        cout << "Maximum: "<< y << endl;
    }
    else{
        cout << "Maximum: "<< z << endl;
    }
    return 0;
}
