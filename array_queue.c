#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent a queue
struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

// Initialize an empty queue
void initialize(struct Queue *queue) {
    queue->front = queue->rear = -1;
}

// Check if the queue is empty
int isEmpty(struct Queue *queue) {
    return (queue->front == -1);
}

// Check if the queue is full
int isFull(struct Queue *queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Enqueue (add) an element to the queue
void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full, cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->arr[queue->rear] = value;
}

// Dequeue (remove) an element from the queue
int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty, cannot dequeue\n");
        return -1; // Assuming -1 is not a valid element
    }
    int data = queue->arr[queue->front];
    if (queue->front == queue->rear) {
        // Last element in the queue
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return data;
}

// Peek at the front element of the queue without removing it
int peek(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty, cannot peek\n");
        return -1; // Assuming -1 is not a valid element
    }
    return queue->arr[queue->front];
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
