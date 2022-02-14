#include <stdio.h>
#include <stdlib.h>
int queue[100];
int size;
int top=-1;
int fptr=0;
void enqueue(int data){
    if(top!=size-1){
         top++;
         queue[top]=data;
    }
}
void dequeue(){
    if(top!=-1 || fptr!=top){
        fptr++;
    }
}
void printQueue(){
    printf("\n");
    for(int i=fptr;i<=top;i++){
        printf(" <-- %d", queue[i]);
    }
}
int main(){
    size=10;
    enqueue(50);
    enqueue(56);
    printQueue();
    dequeue();
    printQueue();
}