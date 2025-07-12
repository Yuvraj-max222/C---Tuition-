/* Write a program to print the following pattern
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5 */

#include<iostream>
using namespace std;
#define N 5
int main() {
    int i, j, k, count=5;
    for(i=1;i<=N;++i) {
        for(k=1;k<=count;++k) {
            cout << " ";
        }
        for(j=1;j<=i;++j) {
            cout.width(2);
            cout << i;
        }
        cout << " "<<endl;
        count--;
    }
}