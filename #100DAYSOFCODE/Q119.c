// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one number will be repeated):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xor_all = 0;
    for(int i = 0; i < n; i++) {
        xor_all ^= arr[i];
    }

    
    for(int i = 1; i < n; i++) {
        xor_all ^= i;
    }

    printf("Repeated element: %d\n", xor_all);
    return 0;
}
