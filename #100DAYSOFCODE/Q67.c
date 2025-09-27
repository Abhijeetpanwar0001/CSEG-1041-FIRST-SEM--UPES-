//Q67 Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, num;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element and position
    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos - 1] = num;
    n++;

    // Print updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
