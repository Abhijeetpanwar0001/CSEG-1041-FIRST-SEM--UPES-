//Q59 Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Count of even numbers = %d\n", evenCount);
    printf("Count of odd numbers = %d\n", oddCount);

    return 0;
}
