//Write a program to classify a given number as prime or composite.
#include<iostream>
using namespace std;
int main() {
    int flag=0, i, num;
    cout << "Emter any number: ";
    cin >> num;
    for(i=1;i<num/2;++i) {
        if(num%2 == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        cout << num <<" is not a composite.";
    } else {
        cout << num <<" is a prime number.";
    }
    return 0;
}