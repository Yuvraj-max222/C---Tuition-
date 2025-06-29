//Write a program to read the numbers until -1 is encountered. Count the negative, positive, and zeroes by the user.
#include<iostream>
using namespace std;
int main() {
    int num;
    int negatives=0, positives=0, zeroes=0;
    cout << "Enter -1 to exit the program...";
    cout << "Enter the number: "<<endl;
    cin >> num;
    while(num != -1) {
        if(num > 0) {
            positives++;
        } else if(num < 0) {
            negatives++;
        } else {
            zeroes++;
        }
        cout << "Enter the number: "<<endl;
        cin >> num;
    }
    cout << "The number of times positives are entered are: "<<positives <<endl;
    cout << "The number of times negatives are entered: "<<negatives <<endl;
    cout << "The number of times zeroes are entered: "<<zeroes <<endl;
    return 0;
}