#include <stdio.h>
#include <stdlib.h>
struct stack {
    int element;
    struct stack *next;
}*top;
int isFull(){
    struct stack *temp;
    temp = (struct stack*)malloc(sizeof(struct stack));
    if(temp==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

void push(int data){
    struct stack *temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    if(!isFull()){
        temp->element = data;
        temp->next = top;
        top = temp;
    }else{
        printf("\nCan't Push Element %d\n", data);
    }
}
int pop(){
    int x;
    if(!isFull()){
        x = top->element;
        top=top->next;
        return x;
    }
    else{
        return -1;
    }
}
void printStack(){
    struct stack *temp=top;
    if(!isEmpty()){
        printf("Stack:- \n");
        while(temp!=NULL){
        printf("---> %d\n", temp->element);
        temp=temp->next;
        }
    } 
}
int main(){
    push(12);
    push(45);
    printStack();
    printf("Removed --> %d\n", pop());
    printf("Removed --> %d\n", pop());
    printStack();
}