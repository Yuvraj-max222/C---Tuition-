//Write a program to calculate roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;

    float D = b * b - 4 * a * c;
    float deno = 2 * a;
    float root1, root2;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / deno;
        root2 = (-b - sqrt(D)) / deno;
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    } else if (D == 0) {
        root1 = root2 = -b / deno;
        cout << "Roots are real and equal: " << root1 << endl;
    } else {
        float realPart = -b / deno;
        float imagPart = sqrt(-D) / deno;
        cout << "Roots are complex: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}