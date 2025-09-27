//Q70 Rotate an array to the right by k positions
#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int i, j, temp;

    // In case k > n
    k = k % n;

    // Rotate k times
    for (i = 0; i < k; i++) {
        temp = arr[n - 1];  // last element
        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];  // shift right
        }
        arr[0] = temp;  // put last at front
    }
}

int main() {
    int arr[100], n, i, k;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    // Print rotated array
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
