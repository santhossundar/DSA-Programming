#include <stdio.h>

#define SIZE 5

typedef struct queue {
    int front, rear, arr[SIZE];
} Queue;

void createQueue(Queue *q){
    q->front = q->rear = -1;
}

void enqueue(Queue *q, int n){
    if (q->rear == SIZE){
        printf("Queue is full!\n");
    }
    else if (q->front == -1 && q->rear == -1){
        q->front = q->rear = 0;
        q->arr[q->rear++] = n;
    }
    else {
        q->arr[q->rear++] = n;
    }     
}

void dequeue(Queue *q){
    if (q->front == -1 && q->rear == -1){
        printf("Queue is empty!");
    }
    else if (q->front == q->rear){
        q->front = q->rear = -1;
    }
    else {
        q->front++;
    } 
}

void printQueue(Queue *q){
    if (q->front == -1 && q->rear == -1){
        printf("Queue is empty!");
    }
    else {
        for (int i = q->front; i < q->rear; i++){
            printf("%d ", q->arr[i]);
        }
        printf("\n");        
    }    
}

int main(){

    Queue q1, q2;

    //First Queue & Operations
    createQueue(&q1);

    enqueue(&q1, 1);
    enqueue(&q1, 2);
    enqueue(&q1, 3);
    printQueue(&q1);        // Output >>> 1 2 3

    dequeue(&q1);       
    printQueue(&q1);        // Output >>> 2 3

    enqueue(&q1, 4);
    enqueue(&q1, 5);
    printQueue(&q1);        // Output >>> 2 3 4 5

    enqueue(&q1, 6);        // Queue is full!
    printQueue(&q1);        // Output >>> 2 3 4 5

    dequeue(&q1);       
    printQueue(&q1);        // Output >>> 3 4 5

    enqueue(&q1, 6);        // Queue is full!
    printQueue(&q1);        // Output >>> 3 4 5

    //Second Queue & Operations
    createQueue(&q2);

    enqueue(&q2, 1);
    enqueue(&q2, 8);
    enqueue(&q2, 0);
    printQueue(&q2);        // Output >>> 1 8 0

    dequeue(&q2);       
    printQueue(&q2);        // Output >>> 8 0

    enqueue(&q2, 3);
    enqueue(&q2, 9);
    printQueue(&q2);        // Output >>> 8 0 3 9

    enqueue(&q2, 9);        // Queue is full!
    printQueue(&q2);        // Output >>> 8 0 3 9

    dequeue(&q2);       
    printQueue(&q2);        // Output >>> 0 3 9

    enqueue(&q2, 3);        // Queue is full!
    printQueue(&q2);        // Output >>> 0 3 9

    return 0;

}