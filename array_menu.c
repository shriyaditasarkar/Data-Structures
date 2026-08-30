//Write a C program to read n integers into an array.
//Create a user-defined function countEven() that accepts the array and its size and returns the number of even elements to the main() function. 
//The main() function should then calculate the number of odd elements using the total number of elements.
#include <stdio.h>

//count function
int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}


int main(){
    int size;
    printf("Enter the length of array: ");
    scanf("%d",&size);
    //array initialization
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }

    //array display
    printf("\nThe array is:\n");
    for(int j=0; j<size; j++){
        printf("%d ",arr[j]);
    }
    //function calling
    int even;
    even = countEven(arr,size);
    printf("\nThe even numbers of the array are: %d\n",even);
    int odd = size - even;
    printf("The number of odd elements of the array is: %d\n",odd);

}