#include <stdio.h>

int front = -1;
int rear = -1;

int dq[3];

#define MAXSIZE 3

void insertion_front();
void insertion_rear();
void deletion_front();
void deletion_rear();
void display();

int main() {

    int choice, flag = 1;

    printf("\n======== DEQUEUE ========");

    printf("\n1. Insertion from Front");
    printf("\n2. Insertion from Rear");
    printf("\n3. Deletion from Front");
    printf("\n4. Deletion from Rear");
    printf("\n5. Display");

    while (flag) {

        printf("\nEnter your choice of operation: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                insertion_front();
                break;

            case 2:
                insertion_rear();
                break;

            case 3:
                deletion_front();
                break;

            case 4:
                deletion_rear();
                break;

            case 5:
                display();
                break;

            default:
                printf("INVALID OPTION! Please enter a correct option");
        }

        printf("\nDo you want to continue? (1=Yes, 0=No): ");
        scanf("%d", &flag);
    }

    return 0;
}
void insertion_front() {

    int item;
    int i;

    if (rear == MAXSIZE - 1) {

        printf("The queue is full");
        return;
    }

    printf("Enter the element: ");
    scanf("%d", &item);
    if (front == -1) {

        front = rear = 0;
        dq[front] = item;
    }

    else {
        for (i = rear; i >= front; i--) {
            dq[i + 1] = dq[i];
        }
        dq[front] = item;
        rear++;
    }
    printf("Insertion from front complete");
}

void insertion_rear() {

    int item;
    if (rear == MAXSIZE - 1) {

        printf("The queue is full");
        return;
    }
    printf("Enter the element: ");
    scanf("%d", &item);

    if (front == -1) {

        front = rear = 0;
    }

    else {

        rear++;
    }

    dq[rear] = item;

    printf("Insertion from rear complete");
}
void deletion_front() {

    int item;

    if (front == -1 && rear == -1) {

        printf("The queue is empty");
        return;
    }

    item = dq[front];
    if (front == rear) {

        front = rear = -1;
    }
    else {

        front++;
    }
    printf("The item deleted is: %d", item);
    printf("\nDeletion from front complete");
}
void deletion_rear() {

    int item;

    if (front == -1 && rear == -1) {

        printf("The queue is empty");
        return;
    }

    item = dq[rear];

    if (front == rear) {

        front = rear = -1;
    }

    else {

        rear--;
    }

    printf("The item deleted is: %d", item);
    printf("\nDeletion from rear complete");
}
void display() {

    int i;

    if (front == -1 && rear == -1) {

        printf("The queue is empty");
        return;
    }

    printf("The elements are:\n");

    for (i = front; i <= rear; i++) {

        printf("%d ", dq[i]);
    }

    printf("\nDisplay complete");
}