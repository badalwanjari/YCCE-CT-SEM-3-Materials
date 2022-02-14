#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* insetAtBegin(struct node *head, int data){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head->next;
    head=temp;
    return head;
}
struct node* insertAtEnd(struct node* head, int data){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        head=insetAtBegin(head, data);
        return head;
    }
    else{
        temp->data = data;
        while(head->next!=NULL){
            head=head->next;
        }
        temp->next = NULL;
        head->next = temp;
        return head;
    }
}
void printLinkedList(struct node *head){
    while(head!=NULL){
        printf("-->%d\n", head->data);
        head= head->next;
    }
}
int main(){
    struct node *head;
    struct node *one;
    one = (struct node*)malloc(sizeof(struct node));
    one->data = 12;
    head=one;
    one->next = NULL;
    // head=insertAtEnd(head, 23);
    head=insetAtBegin(head, 11);
    printLinkedList(head);
}