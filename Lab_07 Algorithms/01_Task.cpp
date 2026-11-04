// Task 1 – . Write a C++ program to find the sum of digits using iteration.
// Ask the user to enter an integer number.
// Use a while loop to extract each digit.
// Add all digits to find the total sum.
// Display the final result

#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0;

    cout << "Please Enter an Integer: ";
    cin >> num;

    num = abs(num); // converting to Absolute Positive Value.

    while (num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
