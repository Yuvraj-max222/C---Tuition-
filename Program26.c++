/* Write a program to read a character until a '*' is encountered. Count the number of upper cases, lower cases and numbers entered by the
user. */

#include<iostream>
using namespace std;
int main() {
    char ch;
    int lowers=0, uppers=0, numbers=0;
    cout << "Enter any character: ";
    cin >> ch;
    do {
        if(ch >= 'A' && ch <= 'Z') {
            uppers++;
        } else if(ch >= 'a' && ch <= 'z') {
            lowers++;
        } else if(ch >= '0' && ch <= '9') {
            numbers++;
        }
        cout << "Enter another character until * is pressed."<<endl;
        cin >> ch;
    } while(ch != '*');
    cout << "Total count of upper case characters are entered: "<<uppers <<endl;
    cout << "Total count of lower case characters are entered: "<<lowers <<endl;
    cout << "Total count of numbers are entered: "<<numbers <<endl;
    return 0;
}