//Write a program using for loop to print all the numbers from m-n thereby classifying them as even or odd.
#include<iostream>
using namespace std;
int main() {
    int i, n, m;
    cout << "Enter the values: ";
    cin >> m >> n;
    for(i=m;i<=n;++i) {
        if(i%2 == 0) {
            cout << i <<" is even."<<endl;
        }
        else {
            cout << i <<" is odd."<<endl;
        }
    }
    return 0;
}