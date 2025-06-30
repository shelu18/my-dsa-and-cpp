#include<iostream>
using namespace std;
//factorial recursion 
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}
int main(){
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    // Check for negative input
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    // Calculate factorial using recursion
    int result = factorial(number);
    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}