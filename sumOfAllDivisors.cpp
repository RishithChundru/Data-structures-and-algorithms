#include <iostream>
using namespace std;

// Function to calculate the sum of all sumOfDivisors(i) for i from 1 to n
int sumOfDivisors(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                sum += j;
            }
        }
        totalSum += sum;
    }
    return totalSum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sumOfDivisors(n);
    cout << "The sum of sumOfDivisors(i) for all i from 1 to " << n << " is: " << result << endl;

    return 0;
}
