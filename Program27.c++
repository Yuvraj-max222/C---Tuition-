/* Write a program to read the numbers until -1 is encountered. Calculate the sum and mean of all positive numbers entered and mean of
all negative numbers entered seperately. */

#include<iostream>
using namespace std;
int main() {
    int num;
    int sum_negatives=0, sum_positives=0;
    int positives=0, negatives=0;
    float mean_positives=0, mean_negatives=0;
    cout << "Enter -1 to exit..."<<endl;
    cout << "Enter any number: ";
    cin >> num;
    do {
        if(num > 0) {
            sum_positives += num;
            positives++;
        } else if(num < 0) {
            sum_negatives += 0;
            negatives++;
        }
    } while(num != -1);
    cout << "Enter any number: ";
    cout << "Sum of all positive numbers entered: "<<sum_positives <<endl;
    cout << "Sum of all negative numbers entered: "<<sum_negatives <<endl;
    mean_positives = sum_positives/positives;
    mean_negatives = sum_negatives/negatives;
    cout << "Mean of all positives: "<<mean_positives <<endl;
    cout << "Mean of all negatives: "<<mean_negatives <<endl;
    return 0;
}