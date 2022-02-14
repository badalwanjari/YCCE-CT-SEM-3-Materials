#include <stdlib.h>
#include <stdio.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(struct stack *ptr, int i){
    int index = ptr->top - i + 1;
    if(index < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return ptr->arr[index];
    }
}

void push(struct stack *ptr, int val){
    if(!isFull(ptr)){
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    else{
        printf("StackOverFlow !!! Cannot enter %d in the stack\n", val);
    }
}

int pop(struct stack *ptr){
    if(!isEmpty(ptr)){
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    else{
        printf("StackUnderFlow !!! Cannot Remove element");
    }
}

void printStack(struct stack *sp){
    for(int i=0;i<=sp->top;i++){
        printf("--->%d\n", sp->arr[i]);
    }
}

int stackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack *ptr){
    return ptr->arr[0];
}

int main(){
    //creation of stack
    struct stack *sp;
    sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    push(sp, 12);
    push(sp, 23);
    push(sp, 40);
    push(sp, 10);
    push(sp, 45);
    push(sp, 76);
    printStack(sp);
}