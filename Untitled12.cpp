//double ended queue
#include <stdio.h>
#define SIZE 5

int deque[SIZE], front = -1, rear = -1;

void insertFront(int x) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }
    if (front == -1)
        front = rear = 0;
    else if (front == 0)
        front = SIZE - 1;
    else
        front--;
    deque[front] = x;
}

void insertRear(int x) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }
    if (rear == -1)
        front = rear = 0;
    else if (rear == SIZE - 1)
        rear = 0;
    else
        rear++;
    deque[rear] = x;
}

void display() {
    int i = front;
    while (i != rear) {
        printf("%d ", deque[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", deque[i]);
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();
    return 0;
}
