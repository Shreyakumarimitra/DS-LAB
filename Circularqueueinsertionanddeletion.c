#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;
void enqueue(int value) {
    if((front == 0 && rear == MAX - 1) || (rear + 1) % MAX == front) {
        printf("Queue Overflow! Cannot insert %d\n", value);
    } else {
        if(front == -1) {  // first element
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }
        queue[rear] = value;
        printf("%d inserted into queue\n", value);
    }
}
void dequeue() {
    if(front == -1) {
        printf("Queue Underflow! Cannot delete\n");
    } else {
        printf("%d deleted from queue\n", queue[front]);
        if(front == rear) {  // only one element
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}
void display() {
    int i;
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    i = front;
    while(1) {
        printf("%d ", queue[i]);
        if(i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}
int main() {
    int choice, value;
    while(1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Insert (Enqueue)\n2. Delete (Dequeue)\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}