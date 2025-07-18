//Write a program using for loop to calculate factorial of a number.
#include<iostream>
using namespace std;
int main() {
    int fact=1, num, i;
    cout << "Enter the number: ";
    cin >> num;
    if(num == 0) {
        fact = 1;
    } else {
        for(i=1;i<=num;++i) {
            fact = fact * i;
        }
    }
    cout << "Factorial of "<< num <<" is: "<<fact <<endl;
    return 0;
}