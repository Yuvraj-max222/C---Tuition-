//Write a program using for loop to calculate the average of first n natural numbers.
#include<iostream>
using namespace std;
int main() {
    int n, i, sum=0;
    float avg=0;
    cout << "Enter the value of n: ";
    cin >> n;
    for(i=1;i<=n;++i) {
        sum = sum + i;
    }
    avg = sum/n;
    cout << "The first n natural numbers: "<<sum <<endl;
    cout << "The average of first n natural numbers: "<<avg <<endl;
    return 0;
}