//Read n floating-point numbers into an array. Create a user-defined function calculateAverage() 
//that accepts the array and its size and returns the average of all the elements to the main() function.

#include <stdio.h>
//average function
float calculateAverage(float arr[], int size){
    float sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    
    return sum/size;
}

int main(){
    int n;
    printf("Enter the number of element: ");
    scanf("%d", &n);

    float arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the elements: ");
        scanf("%f",&arr[i]);
    }

    //display
    printf("\nThe array is:\n");
    for(int j=0; j<n; j++){
        printf("%.2f ",arr[j]);
    }
    float avg = calculateAverage(arr,n);
    printf("\nThe average of all the elements is: %.2f\n", avg);

    return 0;

}