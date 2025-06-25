/*A company decides to give bonus to all its employees on Diwali. A 5% bonus on salary is given to male workers and 10% bonus on salary 
to female workers. Write a program to enter the salary and sex of the employee. If the salary of the employee is less than ₹10,000 then
the employee gets an extra 2% bonus on salary. Calculate the bonus that has given to the employee and display the salary that the emplo-
yee will get.*/

#include<iostream>
using namespace std;
int main() {
    char ch;
    float salary, bonus, amount_to_be_paid;
    cout << "Enter the sex of the employee (M/F): ";
    cin >> ch;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
    if(ch == 'M') {
        bonus = 0.05 * salary;
    } else {
        bonus = 0.10 * salary;
    }
    if(salary < 10,000) {
        bonus += 0.20 * salary;
    }
    amount_to_be_paid = salary + bonus;
    cout << "Salary: "<<salary <<endl;
    cout << "Bonus: "<<bonus <<endl;
    cout << "Total amount: "<<amount_to_be_paid <<endl;
    return 0;
}