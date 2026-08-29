//Find the largest and smallest elements in an Array and swap their position in the final array
#include <stdio.h>
int main(){
    int ele,i;
    
    printf("Enter the number of elements of the array: ");     //array initialisation
    scanf("%d",&ele);
    int arr[ele];
    for(i=0; i<ele; i++){
        scanf("%d",&arr[i]);
    }

    printf("The array is: ");     //array display
    for(i=0;i<ele;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int max = arr[0];               //swapping max and min
    int min = arr[0];
    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < ele; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }
    printf("The largest element is: %d\n", max);
    printf("The smallest element is: %d\n", min);

    // Swap the largest and smallest elements
    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;

    printf("The array after swapping the largest and smallest elements is: ");
    for (int i = 0; i < ele; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
    
}