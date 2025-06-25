//Write a program to demonstrate the use of nested if statement.
#include<iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    if(x == y) {
        cout << "The two numbers are equal." <<endl;
    } else if(x > y) {
        cout << x << " is greater than " <<y <<endl;
    } else {
        cout << x << " is less than " <<y <<endl;
    }
    return 0;
}