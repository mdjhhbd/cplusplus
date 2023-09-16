#include <iostream>

using namespace std;

int main()
{
    long double a[1000], number_add;
    long int i, how_many_number;
    cout << "Please input how many number you want to avarage (must Int Number) : ";
    cin >> how_many_number;
    for (i=1; i<=how_many_number; i++){
        cin >> a[i];
        number_add+=a[i];
    }
    cout << "Total number Addition is: " << number_add << endl << "The avarage is: " << number_add/how_many_number << endl;
    return 0;
}
