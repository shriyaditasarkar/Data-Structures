#include <stdio.h>

// Function to find second largest
int findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = arr[1];

    // Make sure largest contains the bigger of the first two
    if (secondLargest > largest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
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

    // Display array
    printf("\nThe array is:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Function call
    int secondLargest = findSecondLargest(arr, n);

    printf("\nThe second largest element is: %d\n", secondLargest);

    return 0;
}