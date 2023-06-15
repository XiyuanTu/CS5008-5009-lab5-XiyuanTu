#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} Node;

Node* makeNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main() {
    int size;
    printf("Input list size: ");
    scanf("%d", &size);

    printf("Input elements of the array: \n");

    int loopNum = 0;
    
    Node* pointer = makeNode(-1);
    Node* head = pointer;

    while (loopNum < size) {
        int val;
        scanf("%d", &val);
        pointer->next = makeNode(val);
        pointer = pointer->next;
        loopNum++;
    }

    head = head->next;

    printf("The list:\n");

    pointer = head;

    while (pointer != NULL) {
        printf("%d ", pointer->value);
        pointer = pointer->next;
    }

    printf("\n");

    head = reverseList(head);

    printf("The reversed list:\n");

    pointer = head;

    while (pointer != NULL) {
        printf("%d ", pointer->value);
        pointer = pointer->next;
    }
    
    return 0;
}