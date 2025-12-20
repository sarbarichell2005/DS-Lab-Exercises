//insertion at the beginning
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* insert_begin(struct node *head, int value) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    return newnode;
}

void traverse(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");
}

int main() {
    struct node *head = NULL;
    head = insert_begin(head, 30);
    head = insert_begin(head, 20);
    head = insert_begin(head, 10);

    traverse(head);
    return 0;
}
