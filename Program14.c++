//Write a program to determine whether an entered character is a vowel or not.
#include<iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    switch(ch) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        cout << ch <<" is a Vowel."<<endl;
        break;
        default:
        cout << ch <<" is a Consonant."<<endl;
    }
}