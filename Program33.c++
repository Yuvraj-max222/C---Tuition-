/* Write a program to peint the following pattern
0
12
345
6789 */

#include<iostream>
using namespace std;
int main() {
    int i, j, count=0;
    for(i=1;i<=4;++i) {
        cout << ""<<endl;
        for(j=1;j<=i;++j) {
            cout << ""<<count++;
        }
    }
}