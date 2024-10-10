#include <iostream>

using namespace std;

void printBinary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }

    // Array to store binary digits
    int binary[32];
    int i = 0;

    // Store the binary representation in the array
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
}

void printComplement(int n) {
    if (n == 0) {
        cout << "1"; // Complement of 0 is 1
        return;
    }

    // Array to store binary digits of the complement
    int complement[32];
    int i = 0;

    // Find the complement of each bit
    while (n > 0) {
        complement[i] = (n % 2 == 0) ? 1 : 0;
        n /= 2;
        i++;
    }

    // Print the complement in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << complement[j];
    }
}

int main() {
    int number = 29; // Example number

    cout << "Binary of " << number << " is: ";
    printBinary(number);
    cout << endl;

    cout << "Complement of " << number << " is: ";
    printComplement(number);
    cout << endl;

    return 0;
}
