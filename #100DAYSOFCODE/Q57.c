//Q57 Find the sum of array elements
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add to sum directly while reading
    }

    // Print sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}
