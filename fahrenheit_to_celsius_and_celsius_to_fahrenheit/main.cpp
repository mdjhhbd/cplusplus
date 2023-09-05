#include <iostream>

using namespace std;

int main()
{
    int a=0;
    double fahrenheit, celsius;
    int x;
    cout << "'1' For Fahrenheit to Celsius " << endl << "'2' For Celsius to Fahrenheit  " << endl;
    while (a=1){
    cin >> x;

    if (x==1){
            // This code for Fahrenheit to Celsius
        cout << "Let Enter your Fahrenheit Temp: ";
        cin >> fahrenheit ;
        celsius = (fahrenheit-32)*5/9; // Formula for Fahrenheit to Celsius
        cout << fahrenheit << " Fahrenheit to Celsius is: " << celsius << endl<< endl;
    }

    else if (x==2){
            //this code for Celsius to Fahrenheit
        cout << "Let Enter your Celsius Temp: ";
        cin >> celsius ;
        fahrenheit = (celsius*9/5)+32; // Formula for Celsius to Fahrenheit
        cout << celsius << " Celsius to Fahrenheit is: " << fahrenheit << endl<< endl;
    }

    else{
        cout << "Try again" << endl;
    }
    }
    return 0;
}
