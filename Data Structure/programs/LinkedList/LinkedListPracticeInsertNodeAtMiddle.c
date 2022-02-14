#include <stdio.h>
#include <stdlib.h>
//Linked List
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *tail;
    
    head = malloc(sizeof(struct node));
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    tail = malloc(sizeof(struct node));
    
    head->data = 1;
    head->next = one;
    
    one->data = 2;
    one->next = two;
    
    two->data = 3;
    two->next = tail;
    
    tail->data = 99;
    tail->next = NULL;
    
    int i=1;
    struct node *p = head;
    while(p!=NULL){
        printf("%d--> %d ", i, p->data);
        p = p->next;
        printf("\n"); i++;
    }
    
    int pos, data;
    printf("Enter a position of element to insert: ");
    scanf("%d", &pos);
    printf("Enter a data : ");
    scanf("%d", &data);
    
    struct node *three;
    three = malloc(sizeof(struct node));
    three->data = data;
    
    struct node *temp = head;
    for(int i=2;i<pos;i++){
        if(temp->next != NULL){
            temp = temp->next;
        }
    }
    three->next = temp->next;
    temp->next = three;
    
    p = head;
    i=1;
    while(p!=NULL){
        printf("%d--> %d ", i, p->data);
        p = p->next;
        printf("\n"); i++;
    }
    return 0;
}
