// Write a program to print the multiplication table of n, where n is entered to the user.
#include<iostream>
using namespace std;
int main() {
    int n, i;
    cout << "Enter any number: ";
    cin >> n;
    cout << "MULTIPLICATION TABLE: "<<n <<endl;
    cout << "*********************";
    for(i=0;i<=20;++i) {
        cout << n <<" X "<< i <<" = "<<(n*i) <<endl;
    }
    return 0;
}