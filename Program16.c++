//Write a program that accepts a number from 1-10. Print whether the number is even or odd using a switch case statement.
#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter any number from 1-10: ";
    cin >> num;
    switch(num) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            cout << "The number is ODD."<<endl;
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            cout << "The number is EVEN."<<endl;
            break;
        
        default:
            cout << "...INVALID INPUT...";
    }
}