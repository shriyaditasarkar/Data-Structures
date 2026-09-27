#include <stdio.h>

void move_disks (int n, char source, char dest, char temp) {
    if (n > 0){
        move_disks(n - 1, source, temp, dest); //moving n-1 disks from S to T
        printf("Move disk %d from %c to %c\n", n, source, dest); //last disk
        move_disks(n - 1, temp, dest, source); //moving n-1 disks from T to D
        }
    return;
}

int main (){
    int n; 
    printf("Enter the number of disks: ");
    scanf("%d", &n); 
    move_disks (n, 'S','T','D'); // S = Source, D = Destination, T = Temporary
    return 0;
}
