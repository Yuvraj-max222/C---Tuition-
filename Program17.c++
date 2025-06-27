//Write a program to calculate the sum of first 10 numbers.
#include<iostream>
using namespace std;
int main() {
    int i=0, sum=0;
    while(i <= 10) {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Summation is: "<<sum <<endl;
    return 0;
}