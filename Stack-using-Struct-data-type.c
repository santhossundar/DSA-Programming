#include <stdio.h>

#define Max 100

typedef struct stack{
    int top;
    int arr[Max];

} Stack;

void createStack(Stack *s){
    s->top = -1;
}

void push(Stack *s, int n){
    s->top++;
    s->arr[s->top] = n;
}

void pop(Stack *s){
    s->top--;
}

void printStack(Stack *s){
    if(s->top!=-1){
        for(int i=0; i<=s->top;i++){
            printf("%d ", s->arr[i]);
        }  
        printf("\n");     
    }
}

int main(){

    Stack stack1;

    createStack(&stack1);
    
    push(&stack1, 1);
    printStack(&stack1);    // Output >>> 1

    Stack stack2;

    createStack(&stack2);

    push(&stack2, 1);
    printStack(&stack2);    // Output >>> 1

    push(&stack2, 2);
    push(&stack2, 3);
    printStack(&stack2);    // Output >>> 1 2 3
    
    pop(&stack2);
    printStack(&stack2);    // Output >>> 1 2

    return 0;
}