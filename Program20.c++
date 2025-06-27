//Write a program to display the largest of 10 numbers using ternary operator.
#include<iostream>
using namespace std;
int main() {
    int i=0, large=-1, num;
    while(i <= 10) {
        cout << "Enter the number: ";
        cin >> num;
        large = num > large?num : large;
        ++i;
    }
    cout << "The largest of the 10 numbers entered is: "<<large <<endl;
    return 0;
}