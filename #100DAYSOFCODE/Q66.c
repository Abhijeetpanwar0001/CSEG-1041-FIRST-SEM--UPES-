//Q66 Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100], n, i, num, pos;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input new element
    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Find position to insert
    pos = n;  // assume at end
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = num;
    n++;

    // Print updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
