#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int deque[MAX];
int front = -1, rear = -1;

int isFull() {
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

int isEmpty() {
    return (front == -1);
}

void insertRear(int key) {
    if (isFull()) {
        printf("Overflow\n");
        return;
    }
    if (rear == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    deque[rear] = key;
}

void deleteRear() {
    if (isEmpty()) {
        printf("Underflow\n");
        return;
    }
    int removed = deque[rear];
    if (front == rear) {
        front = rear = -1;
    } else {
        rear = (rear - 1 + MAX) % MAX;
    }
    printf("Deleted %d from the rear.\n", removed);
}

void display() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", deque[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", deque[rear]);
}

int main() {
    insertRear(10);
    insertRear(20);
    insertRear(30);
    display();
    deleteRear();
    display();
    return 0;
}
