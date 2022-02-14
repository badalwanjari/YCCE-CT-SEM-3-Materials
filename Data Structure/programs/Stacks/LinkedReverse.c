#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printList(struct node *head)
{
    while (head != NULL)
    {
        printf("--->%d\n", head->data);
        head = head->next;
    }
}
void insertAtEnd(struct node *head, int data)
{

    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
    temp->next = NULL;
}
struct node *insertAtBegin(struct node *head, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    return temp;
}

struct node *reveseList(struct node* head){
    struct node* next;
    struct node* curr = head;
    struct node* prev=NULL;

    while(curr!=NULL){
        next =curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

struct node * reverseListRecursion(struct node * head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    struct node * newHead = reverseListRecursion(head->next);
    head->next->next = head;
    head->next= NULL;
    return newHead;
}


int main()
{
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;

    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;

    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = insertAtBegin(head, 0);

    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);

    // printList(head);
    
    head = reverseListRecursion(head);

    printList(head);
    return 0;
}