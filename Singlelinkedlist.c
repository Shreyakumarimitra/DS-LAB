#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert_begin(int value) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("%d inserted at beginning\n", value);
}
void delete_begin() {
    struct node *temp;
    if(head == NULL) {
        printf("List is empty! Cannot delete\n");
        return;
    }
    temp = head;
    printf("%d deleted from list\n", temp->data);
    head = head->next;
    free(temp);
}
void display() {
    struct node *temp = head;
    if(temp == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Linked List elements are:\n");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int choice, value;

    while(1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Delete First Node\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert_begin(value);
                break;

            case 2:
                delete_begin();
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