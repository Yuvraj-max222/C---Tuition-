//Write a program to find whether the given number is even or odd.
#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if(num%2 == 0) {
        cout << "The number is even."<<endl;
    } else {
        cout << "The number is odd."<<endl;
    }
    return 0;
}