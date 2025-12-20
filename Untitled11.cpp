//circular queue using ll
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;

    if (front == NULL) {
        front = rear = newnode;
        rear->next = front;
    } else {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue() {
    if (front == NULL)
        printf("Queue Underflow\n");
    else if (front == rear) {
        printf("Deleted element: %d\n", front->data);
        free(front);
        front = rear = NULL;
    } else {
        struct node *temp = front;
        printf("Deleted element: %d\n", temp->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display() {
    if (front == NULL)
        printf("Queue is empty\n");
    else {
        struct node *temp = front;
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != front);
        printf("\n");
    }
}

int main() {
    enqueue(11);
    enqueue(22);
    enqueue(33);
    display();
    dequeue();
    display();
    return 0;
}
