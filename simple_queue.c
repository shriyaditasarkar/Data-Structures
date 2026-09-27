#include <stdio.h>
int front = -1;
int rear = -1;
int sq[3];
# define MAXSIZE 3
void insertion();
void deletion();
void display();
int main(){
    int choice, flag = 1;

    printf("\n======== SIMPLE QUEUE ========");
    printf("\n1.Insertion of element\n2.Deletion of element\n3.Display of queue");
    while (flag){
        printf("\nEnter your choice of operation: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:{
                insertion();
                break;
            }
            case 2:{
                deletion();
                break;
            }
            case 3:{
                display();
                break;
            }
            default:{
                printf("INVALID OPTION! Please enter a correct option");
            }
        }
        printf("\nDo you want to continue? (1=Yes, 0=No): ");
        scanf("%d",&flag);
    }
    return 0;
}

void insertion(){
    if (rear == MAXSIZE-1){
        printf("The queue is full");
        return;
    }
    else{
        int item;
        printf("Enter the element: ");
        scanf("%d",&item);
        rear=rear+1;
        sq[rear]=item;
        printf("Insertion complete");
    }
    if (front == -1){
        front = 0;
    } 
    }
void deletion(){
    int item;
    if ((front==-1) && (rear==-1)){
        printf("The queue is empty");
        return;
    }
    else if (front==rear){
        front=rear=-1;
        item = sq[front];
        printf("The item deleted is: %d", item);

    }
    else{
        item = sq[front];
        front = front+1;
        printf("The item delted is: %d", item);
    }
    printf("\nDeletion complete");
    }
void display(){
    if (front==rear==-1){
        printf("The queue is empty");
        return;
    }
    else{
        printf("The elements are:\n");
        for (int i=front; i<=rear; i++){
            printf("%d ", sq[i]);
        }
    }
    printf("Display complete");
    }