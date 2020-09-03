/*Write a C/C++ program that takes n number of command line arguments and finds the least number.
In case of invalid entered value, prompt the user to enter another value.*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int n;
    cout << "ENTER NUMBER OF ARGUMENTS"
         << "\n";
    cin >> n;
    cout << "ENTER ONE BY ONE "
         << "\n";
    int min = 2147483647;
    for (int i = 0; i < n; i++)
    {
        int isNumber = 1;
        while (isNumber)
        {
            string something;
            cin >> something;
            int will;
            for (int i = 0; i < something.length(); i++)
            {
                if (isdigit(something[i]) == false)
                {
                    will = 0;
                    break;
                }
                else
                {
                    will = 1;
                }
            }
            if (will == 1)
            {
                int num = stoi(something);
                if (num < min)
                {
                    min = num;
                }
                isNumber = 0;
            }
            else
            {
                cout << "PLEASE CHECK THE NUMBER...."
                     << "\n";
            }
        }
    }

    cout << "The smallest number is : " << min;

    return 0;
}