#include <stdio.h>

#define SIZE 5

int arr[SIZE];
int front = -1, rear = -1;

void enqueue(int n){
    if (rear==SIZE){
        printf("Queue is full!\n");
    }
    else if (front == -1 && rear == -1){
        front = rear = 0;
        arr[rear++] = n;
    } 
    else {
        arr[rear++] = n;
    }     
}

void dequeue(){
    if (front == -1 && rear == -1){
        printf("Queue is empty!\n");
    }
    else if (front == rear){
        front = rear = -1;
    }
    else { 
        front++;
    } 
}

void printQueue(){
    if (front == -1 && rear == -1){
        printf("Queue is empty!");
    }
    else {
        for (int i = front; i < rear; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main(){

    enqueue(1);
    enqueue(2);
    enqueue(3);
    printQueue();       // Output >>> 1 2 3

    dequeue();
    printQueue();       // Output >>> 2 3

    enqueue(4);
    enqueue(5);
    printQueue();       // Output >>> 2 3 4 5

    enqueue(6);         // Queue is full!
    printQueue();       // Output >>> 2 3 4 5

    dequeue();
    printQueue();       // Output >>> 3 4 5

    enqueue(7);         // Queue is full!
    printQueue();       // Output >>> 3 4 5

    return 0;

}