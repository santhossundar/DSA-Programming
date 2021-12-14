#include <stdio.h>

#define MAXSTACK 100

int arr[MAXSTACK];

int top = -1;

void push(int value){
    
    top++;
    arr[top] = value;
    
}

int pop(){

    int topValue = arr[top];
    top--;
    return topValue;

}

void isStackEmpty(){

    if(top == -1){
        printf("\n----------Stack is Empty-------------\n");
    }

}

int topStackValue(){
    return arr[top];
}

void printStack(){

    for (int i = 0; i < top+1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

}

int main(){

    printf("\n-----Data Stuctures - STACK Implementation-----\n\n");
   
    push(1);
    printStack();   // Output >>> 1

    push(2);
    printStack();   // Output >>> 1 2

    pop();
    printStack();   // Output >>> 1

    push(2);
    printStack();   // Output >>> 1 2

    push(3);
    printStack();   // Output >>> 1 2 3

    pop();
    printStack();   // Output >>> 1 2

    push(3);
    printStack();   // Output >>> 1 2 3

    printf("\nTop: %d\n", topStackValue()); // Output >>> Top: 3

    return 0;
}