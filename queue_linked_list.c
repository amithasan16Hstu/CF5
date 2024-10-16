#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the queue
struct Node {
    int data;
    struct Node* next;
};

// Structure to represent a queue
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Initialize an empty queue
void initialize(struct Queue *queue) {
    queue->front = queue->rear = NULL;
}

// Check if the queue is empty
int isEmpty(struct Queue *queue) {
    return (queue->front == NULL);
}

// Enqueue (add) an element to the queue
void enqueue(struct Queue *queue, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Dequeue (remove) an element from the queue
int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty, cannot dequeue\n");
        return -1; // Assuming -1 is not a valid element
    }
    struct Node* temp = queue->front;
    int data = temp->data;
    queue->front = temp->next;
    free(temp);
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    return data;
}

// Peek at the front element of the queue without removing it
int peek(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty, cannot peek\n");
        return -1; // Assuming -1 is not a valid element
    }
    return queue->front->data;
}

int main() {
    struct Queue queue;
    initialize(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Front element: %d\n", peek(&queue));

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));

    printf("Is the queue empty? %s\n", isEmpty(&queue) ? "Yes" : "No");

    return 0;
}
