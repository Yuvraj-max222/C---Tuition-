//Write a program to find whether a given year is leap year or not.
#include<iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter any year: ";
    cin >> year;
    if((year%4 == 0 && year%100 != 0) || (year%400 == 0)) {
        cout << "It's a Leap Year."<<endl;
    } else {
        cout << "It's not a Leap Year."<<endl;
    }
    return 0;
}