//Write a program to calculate the average of numbers entered by the user.
#include<iostream>
using namespace std;
int main() {
    int num, sum=0, count=0;
    float avg;
    cout << "Enter -1 to stop the program... ";
    cout << "Enter the numbers: ";
    cin >> num;
    while(num != -1) {
        count++;
        sum = sum + num;
        cout << "Enter -1 to stop the program... ";
        cout << "Enter the numbers: ";
        cin >> num;
    }
    avg = (float) sum/count;
    cout << "Summation is: "<<sum <<endl;
    cout << "Average is: "<<avg <<endl;
    return 0;
}