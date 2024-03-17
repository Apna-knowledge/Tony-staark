#include <iostream>

using namespace std;

// Function to calculate Fibonacci series
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
}

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number for terms." << endl;
    } else {
        printFibonacci(n);
    }

    return 0;
}