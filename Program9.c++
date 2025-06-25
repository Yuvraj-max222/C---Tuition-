/*Write a program to calculate tax given in the following conditions:
If income is less than ₹1,50,000 then no tax.
If income is ₹1,50,001 - ₹3,00,000 then charge 10%.
If income is ₹3,00,001 - ₹5,00,000 then charge 20%.
If income is above ₹5,00,001 then charge 30%.*/

#include<iostream>
#define MIN1 150001
#define MAX1 300000
#define RATE1 0.10
#define MIN2 300001
#define MAX2 500000
#define RATE2 0.20
#define MIN3 500001
#define RATE3 0.30
using namespace std;
int main() {
    double income, taxable_income, tax;
    cout << "Enter the income: ";
    cin >> income;
    taxable_income = income - 150000;
    if(taxable_income <= 0) {
        cout << "NO TAX"<<endl;
    } else if(taxable_income >= MIN1 && taxable_income < MAX1) {
        tax = (taxable_income - MIN1) * RATE1;
    } else if(taxable_income >= MIN2 && taxable_income < MAX2) {
        tax = (taxable_income - MIN2) * RATE2;
    } else {
        tax = (taxable_income - MIN3) * RATE3;
    }
    cout << "TAX: "<<tax <<endl;
    return 0;
}