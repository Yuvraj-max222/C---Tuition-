/*Write a program to take input from the user and then check whether it is a number or a character. If it is a character, determine
whether it is in upper case or lower case*/

#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z') {
        cout << "The entered character is in upper case."<<endl;
    } else if(ch >= 'a' && ch <= 'z') {
        cout << "The entered character is in lower case."<<endl;
    } else if(ch >= '0' && ch <= '9') {
        cout << "It's a number."<<endl;
    } else {
        cout << "...INVALID INPUT..."<<endl;
    }
    return 0;
}