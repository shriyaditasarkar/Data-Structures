#include <stdio.h>

int main() {
    int choice;
    int num;

    do {
        printf("\nMENU\n");
        printf("1. Check whether a number is even or odd\n");
        printf("2. Check whether a number is positive, negative, or zero\n");
        printf("3. Find the square of a number\n");
        printf("4. Find the cube of a number\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("%d is even.\n", num);
                else
                    printf("%d is odd.\n", num);

                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num > 0)
                    printf("%d is positive.\n", num);
                else if (num < 0)
                    printf("%d is negative.\n", num);
                else
                    printf("The number is zero.\n");

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                printf("Square of %d = %d\n", num, num * num);

                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                printf("Cube of %d = %d\n", num, num * num * num);

                break;

            case 5:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5);

    return 0;
}