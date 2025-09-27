//Q63 Merge two arrays.
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j;

    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy first array into merged array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array into merged array
    for (j = 0; j < n2; j++) {
        merged[i] = arr2[j];
        i++;
    }

    // Print merged array
    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
