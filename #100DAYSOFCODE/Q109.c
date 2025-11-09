//  Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;

    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter value of k: ");
    scanf("%d", &k);

    int maxSum = -1000000; // Initialize to a very small number

    // Brute-force: check sum of every subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);

    return 0;
}
