/*Write a program to enter the marks of a student in four subjects. Calculate the total, aggregate and display the grade obtained by the
student. If the student scores aggregate is greater than 75%, then the grade is DISTINCTION. If the aggregate is 60 >= and < 75, then the
grade is FIRST DIVISION. If the aggregate is 50 >= and < 60, then the grade is SECOND DIVISION. If the aggregate is 40 >= and ω50, then
the grade is THIRD DIVISION and if lower than that, it'll be marked FAILED.*/

#include<iostream>
using namespace std;
int main() {
    int marks1, marks2, marks3, marks4, total=0;
    float avg=0;
    cout << "Enter the marks of Physics, Maths, Chemistry and English respectively: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4;
    total = marks1 + marks2 + marks3 + marks4;
    avg = (float) total / 4;
    cout << "Total: "<<total <<endl;
    cout << "Aggregate: "<<avg <<endl;
    if(avg >= 75) {
        cout << "DISTINCTION."<<endl;
    } else if(avg >= 60 && avg < 75) {
        cout << "FIRST DIVISION."<<endl;
    } else if(avg >= 50 && avg < 60) {
        cout << "SECOND DIVISION."<<endl;
    } else if(avg >= 40 && avg < 50) {
        cout << "THIRD DIVISION."<<endl;
    } else {
        cout << "FAILED."<<endl;
    }
    return 0;
}