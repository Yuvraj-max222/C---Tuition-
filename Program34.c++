/* Write a program to print the following pattern
A
AB
ABC
ABCD
ABCDE
ABCDEF */

#include<iostream>
using namespace std;
int main() {
    char i, j;
    for(i=65;i<=70;++i) {
        cout << ""<<endl;
        for(j=65;j<=i;++j) {
            cout << char(j);
        }
    }
}