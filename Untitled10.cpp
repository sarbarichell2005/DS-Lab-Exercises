//circular queue using array
#include <stdio.h>
#define MAX 5

int cq[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % MAX == front)
        printf("Circular Queue Overflow\n");
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX;
        cq[rear] = x;
    }
}

void dequeue() {
    if (front == -1)
        printf("Circular Queue Underflow\n");
    else {
        printf("Deleted element: %d\n", cq[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1)
        printf("Circular Queue is empty\n");
    else {
        int i = front;
        while (i != rear) {
            printf("%d ", cq[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", cq[rear]);
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}
