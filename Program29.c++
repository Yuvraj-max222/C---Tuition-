/* Write a program to print the following pattern
*****
*****
*****
*****
***** */

#include<iostream>
using namespace std;
int main() {
    int i, j;
    for(i=1;i<=5;++i) {
        cout << " "<<endl;
        for(j=1;j<=5;++j) {
            cout << "*";
        }
    }
}