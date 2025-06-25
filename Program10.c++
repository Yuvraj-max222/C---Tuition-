//Write a program to find the greatest number from the three numbers.
#include<iostream>
using namespace std;
int main() {
    int num1, num2, num3, greatest=0;
    cout << "Enter any three numbers: ";
    cin >> num1 >> num2 >> num3;
    if(num1 > num2) {
        if(num1 > num3) {
            cout << num1 <<" is greater than "<< num2 <<" and "<< num3 <<endl;
        } else {
            cout << num3 <<" is greater than "<< num1 <<" and "<< num2 <<endl;
        }
    } else if(num2 > num3) {
        cout << num2 <<" is greater than "<< num1 <<" and "<< num3 <<endl;
    } else {
        cout << "All the numbers are equal."<<endl;
    }
    return 0;
}