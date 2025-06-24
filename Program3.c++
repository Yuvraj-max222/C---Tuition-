//Write a program to find the greatest number between two numbers.
#include<iostream>
using namespace std;
int main() {
    int num1, num2, greatest=0;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if(num1 > num2)
        greatest = num1;
    else
        greatest = num2;
    cout << "The greatest number between "<< num1 <<" and "<< num2 <<" is: "<< greatest;
    return 0;
}