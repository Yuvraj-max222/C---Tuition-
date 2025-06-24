//Write a program to determine whether a person is eligible to vote.
#include<iostream>
using namespace std;
int age;
cout << "Enter your age: ";
cin >> age;
if(age >= 18) {
    cout << "You are eligible to vote.\n";
} else {
    cout << "You are not eligible to vote.\n";
}