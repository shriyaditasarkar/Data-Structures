#include <stdio.h>

// Recursive function
int arraySum(int arr[], int index, int size) {
    if (index == size) {
        return 0;
    }

    return arr[index] + arraySum(arr, index + 1, size);
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input
    for (int i = 0; i < n; i++) {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

    // Function call
    int sum = arraySum(arr, 0, n);

    printf("The sum of all elements is: %d\n", sum);

    return 0;
}