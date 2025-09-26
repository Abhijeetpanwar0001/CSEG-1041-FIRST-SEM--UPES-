//Q60 Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, zero = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", pos);
    printf("Negative elements = %d\n", neg);
    printf("Zero elements     = %d\n", zero);

    return 0;
}
