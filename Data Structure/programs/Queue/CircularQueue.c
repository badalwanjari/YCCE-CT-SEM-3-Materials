#include <stdio.h>
#include <stdlib.h>
int queue[1000];
int size = 6;
int front = -1;
int rear = -1;

void enQueue(int data){
    if(rear - front == size-1){
        return;
    }
    if(front==-1)front=0;
    rear = (rear+1)%size;
    queue[rear]=data;
}
void deQueue(){
    if(front == -1){
        printf("\nQueue is empty!!!\n");
        return;
    }else{
        if(front==rear){
            front=-1;
            rear=-1;
        }
        front = (front+1)%size;
    }
    
}
void display(){
    int i;
    if(front!=-1 && rear!=-1){
        printf("Queue: ");
        for(i=front; i!=rear; i=(i+1)%size){
        printf("--->%d ", queue[i]);
    }
    printf("--->%d\n", queue[i]);
    }
    
}
int main(){
    display();
}