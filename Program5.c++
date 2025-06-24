//Write a program to convert any character from UpperCase --> LowerCase and vice-versa.
#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
        cout << "The entered character is in upper case, in lower it'll be: "<<ch;
    } else {
        ch = ch - 32;
        cout << "The entered character is in lower case, in upper it'll be: "<<ch;
    }
    return 0;
}