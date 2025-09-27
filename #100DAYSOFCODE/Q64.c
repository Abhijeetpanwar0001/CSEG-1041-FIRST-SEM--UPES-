//Q64 Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;  // To handle big integers
    int count[10] = {0};  // Frequency array for digits 0–9
    int digit, i, maxDigit, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n; // Handle negative numbers
    }

    // Count digit frequencies
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    // Find digit with maximum frequency
    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxCount);

    return 0;
}
