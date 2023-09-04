#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    // Edge case: 0 and 1 are not prime
    if (n <= 1)
    {
        return false;
    }

    // Check for divisors from 2 to the square root of n
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is prime" << endl;
    }
    else
    {
        cout << num << " is not prime" << endl;
    }

    return 0;
}

