//Write a program to list all the leap years from 1900 to 2100.
#include<iostream>
using namespace std;
int main() {
    int m=1900, n=2100, i;
    do {
        if(i % 400 == 0) {
            cout << m <<" is a leap year."<<endl;
        } else {
            cout << m <<" is not a leap year."<<endl;
            m= m + 1;
        }
    } while(m <= n);
    return 0;
}