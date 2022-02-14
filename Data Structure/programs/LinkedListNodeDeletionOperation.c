#include <stdio.h>
#include<stdlib.h>

//Linked List Node deletion Operation

struct node{
	int data;
	struct node *next;
};
void printLinkedList(struct node *head){
	while(head!=NULL){
		printf("-->%d\n", head->data);
		head=head->next;
	}
}
struct node* deleteFirstNode(struct node *head){
	head=head->next;
	return head;
}
struct node* deleteLastNode(struct node *head){
	struct node *p=head;
	while(p->next->next!=NULL){
		p=p->next;
	}
	p->next=NULL;
	return head;
}

struct node* deleteNodeAtIndex(struct node *head, int index){
	struct node *temp=head;
	int i=0;
	while(i<index-1){
		temp=temp->next;
		i++;
	}
	temp->next=temp->next->next;
	return head;
}


int main() {
	struct node *head = malloc(sizeof(struct node));
	struct node *first = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));
	struct node *fourth = malloc(sizeof(struct node));
	
	first->data = 12;
	second->data = 24;
	third->data = 36;
	fourth->data = 48;
	
	head=first;
	first->next=second;
	second->next=third;
	third->next = fourth;
	fourth->next = NULL;
	printf("Linked List Before: \n");
	printLinkedList(head);
	
//	head=deleteFirstNode(head);
//	head=deleteLastNode(head);
	head=deleteNodeAtIndex(head, 3);
	printf("Linked list after operation: \n");
	printLinkedList(head);
}