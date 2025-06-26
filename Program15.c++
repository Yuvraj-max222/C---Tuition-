//Write a program to enter a number from 1-7 and display the corresponding day of the week using switch case.
#include<iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter any number from 1-7: ";
    cin >> day;
    switch(day) {
        case 1:
            cout << "SUNDAY."<<endl;
            break;
        case 2:
            cout << "MONDAY."<<endl;
            break;
        case 3:
            cout << "TUESDAY."<<endl;
            break;
        case 4:
            cout << "WEDNESDAY."<<endl;
            break;
        case 5:
            cout << "THURSDAY."<<endl;
            break;
        case 6:
            cout << "FRIDAY."<<endl;
            break;
        case 7:
            cout << "SATURDAY."<<endl;
            break;
        default:
            cout << "...INVALID INPUT...";
    }
}