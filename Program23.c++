//Write a program to calculate the average first of n numbers.
#include<iostream>
using namespace std;
int main() {
    int n, i=0, sum=0;
    float avg=0;
    cout << "Enter the value of n: ";
    cin >> n;
    do {
        sum = sum + i;
        i = i + 1;
    } while(i <= n);
    avg = sum/n;
    cout << "The sum of first n numbers: "<<sum <<endl;
    cout << "The average of first n numbers: "<<avg <<endl;
    return 0;
}