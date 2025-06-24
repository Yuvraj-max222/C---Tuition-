//Write a program to determine the character entered by the user.
#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
    char ch;
    cout << "Press any key: ";
    cin >> ch;
    if(isalpha(ch) > 0) {
        cout << "The user has entered a character."<<endl;
    }
    if(isdigit(ch) > 0) {
        cout << "The user has entered a digit."<<endl;
    }
    if(isprint(ch) > 0) {
        cout << "The user has entered a printable character."<<endl;
    }
    if(ispunct(ch) > 0) {
        cout << "The user has entered a punctuation mark."<<endl;
    }
    if(isspace(ch) > 0) {
        cout << "The user has entered a white space character."<<endl;
    }
    return 0;
}