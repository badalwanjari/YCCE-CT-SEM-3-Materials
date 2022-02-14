#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node* next;
}*SSL;
SSL head = NULL;
void createLinkedList(){
    head=NULL;
    SSL temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data of First Node : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    head = temp;
    return;
}
void  insertNodeAtEnd(){
    SSL ptr= head;
    SSL temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter Data of Node : ");
    scanf("%d", &temp->data);
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = NULL;
    return;
}

void deleteLastNode(){
    SSL ptr = head;
    while(ptr->next->next != NULL || ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = NULL;
    return;
}

void displayLL(){
    SSL temp = head;
    while(temp!=NULL){
        printf("\n--->%d", temp->data);
        temp=temp->next;
    }
    return;
}
int main(){
    int choice='1';
    char ch='y';
    while(1){
        printf("\n1. Create Linked List\n2. Add New Node at END\n3. Delete Last Node\n4. Display Linked List\n5. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);
        int data;
        switch (choice)
        {
        case 1:
            createLinkedList();
            break;
        case 2:
            insertNodeAtEnd();
            break;
        case 3:
            deleteLastNode();
            break;
        case 4:
            displayLL();
            break;
        case 5:
            exit(1);
            break;
        default:
            break;
        }
    }
}