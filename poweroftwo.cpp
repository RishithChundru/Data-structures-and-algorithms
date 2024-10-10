#include <iostream>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

int main() {
    int number = 16;
    if (isPowerOfTwo(number)) {
        std::cout << number << " is a power of 2." << std::endl;
    } else {
        std::cout << number << " is not a power of 2." << std::endl;
    }
    return 0;
}
