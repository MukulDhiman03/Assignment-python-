/*Write a C/C++ program that lists down all the prime numbers in a range between a and b, where a and
b are two whole numbers.*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int l1, l2;
    cout << "Enter limit1 and limt2 : "
         << "\n";

    cin >> l1 >> l2;
    cout << "THE PRIME NUMBERS ARE: "
         << "\n";

    for (int i = l1; i <= l2; i++)
    {
        bool isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            cout << i << "\n";
        }
    }
    return 0;
}