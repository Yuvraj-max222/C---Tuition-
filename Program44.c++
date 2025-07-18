// Write a program to calculate the pow(x,n).
#include<iostream>
using namespace std;
int main() {
    int i, n, num;
    long int result = 1;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Till which power to calculate: ";
    cin >> n;
    for(i=1;i<=n;++i) {
        result = result*num;
    }
    cout << "pow ("<<num<<","<<n<<") = "<<result;
}