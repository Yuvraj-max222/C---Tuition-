/* Write a program to print the following pattern
    1
   12
  123
 1234
12345 */

#include<iostream>
#define N 5
using namespace std;
int main() {
    int i, j, k;
    for(i=1;i<=N;++i) {
        for(k=N;k>=i;--k) {
            cout << " ";
        }
        for(j=1;j<=i;++j) {
            cout << ""<<j;
        }
        cout <<endl;
    }
}