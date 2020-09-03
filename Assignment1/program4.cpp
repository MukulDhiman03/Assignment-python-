/*Write a C/C++ program to encrypt and decrypt the string using Caesar Cypher Algorithm. While
encrypting the given string, 5 is added to the ASCII value of the characters. Similarly, for decrypting the
string, 5 is subtracted from the ASCII value of the characters to print an original string. Example - Input
String - hello, Encrypted String - mjqqt*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 cout << "ENTER TEXT TO BE ENCRYPTED: "
         << "\n";
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] += 5;
    }
    cout << str;
 
}