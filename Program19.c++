//Write a program to calculate the sum of numbers from m to n.
#include<iostream>
using namespace std;
int main() {
    int n, m, sum=0;
    cout << "Enter the value of m and n: ";
    cin >> m >> n;
    while(m <= n) {
        sum = sum + m;
        m = m + 1;
    }
    cout << "Summation is: "<<sum <<endl;
    return 0;
}