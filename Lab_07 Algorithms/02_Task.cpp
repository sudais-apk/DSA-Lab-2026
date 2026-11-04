// Task 2 – To write a recursive C++ program that calculates and displays Fibonacci numbers.
// Ask the user to enter the number of terms (n).
// Use a recursive function to find each Fibonacci number.
// Display the Fibonacci sequence.

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter Number of Terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }


    return 0;
}
