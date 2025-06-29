//Write a program using do-while loop to display the square and cube of the first n natural numbers.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int i=1, n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "-----------------------------"<<endl;
    do {
        cout << i << "\t" << i*i << "\t" << i*i*i << endl;
        i++;
    } while(i <= n);
    cout << "-----------------------------"<<endl;
    return 0;
}