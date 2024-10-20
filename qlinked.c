#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *front = NULL, *rear = NULL;

void enqueue();
void dequeue();
void display();

int main() {
    int choice = 0;
    
    while (choice != 4) {
        printf("\nEnter your choice\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid input\n");
        }
    }
    
    return 0;
}

void enqueue() {
    int item;
    printf("\nEnter the item to the linked list:\n");
    scanf("%d", &item);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->link = NULL;

    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->link = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Underflow...\n");
    } else {
        struct node *temp = front;
        if (front == rear) {
            front = rear = NULL;
        } else {
            front = front->link;
        }
        free(temp);
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is empty...\n");
    } else {
        struct node *ptr = front;
        printf("Queue: ");
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
