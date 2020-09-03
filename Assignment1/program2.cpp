//Write a C/C++ program to check whether a string is palindrome or not.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[20];
    cout << "INPUT STRING";
    cin >> str;
    int l = strlen(str);
    int count = 0;
    for (int i = 0; i < l / 2; i++)
    {
        if (str[i] == str[l - i - 1])
        {
            count++;
        }
    }
    if (count == l / 2)
    {
        cout << "Palindrome String";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}