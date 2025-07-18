/* Write a program using do-while loop to read the numbers until -1 is encountered. Count the number of prime numbers and composite numbers
entered by the user. */

#include<iostream>
using namespace std;
int main() {
    int num, i;
    int primes=0, composites=0, flag=0;
    cout << "Enter -1 to exit...";
    cout << "Enter any number: ";
    cin >> num;
    do{
        for(i=2;i<=num%2;++i) {
            if(num%i == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {  
            primes++;
        } else {
            composites++;
        }
        flag = 0;
        cout << "Enter any number: ";
        cin >> num;
    } while(num != 1); 
    cout << "The number of times prime numbers are entered: "<<primes <<endl;
    cout << "The number of times composite numbers are entered: "<<composites <<endl;
    return 0;  
}