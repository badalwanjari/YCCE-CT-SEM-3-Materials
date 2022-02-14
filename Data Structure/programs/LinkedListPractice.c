#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* addNodeAtEnd(struct node *head, int data){
	struct node *temp=head;
	struct node *p=malloc(sizeof(struct node));
	p->data=data;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=p;
	p->next=NULL;
	return head;
}

struct node* addNodeAtBegin(struct node *head, int data){
	struct node *p;
	p=malloc(sizeof(struct node));
	p->data=data;
	p->next=head;
	return p;
}

struct node* addNodeAtIndex(struct node *head, int data, int index){
	struct node *p, *temp=head;
	p=malloc(sizeof(struct node));
	p->data=data;
	int i=0;
	while(i!=index-1){
		temp=temp->next;
		i++;
	}
	p->next=temp->next;
	temp->next=p;
	return head;
}


void sortLinkedList(struct node *head){
	if(head==NULL){
		return;
	}
	else{
		struct node *current=head, *index=NULL;
		int temp;
		while(current!=NULL){
			index = current->next;
			while(index!=NULL){
				if(current->data>index->data){
					temp=current->data;
					current->data=index->data;
					index->data=temp;
				}
				index=index->next;
			}
			current=current->next;
		}
	}
}

void printNode(struct node *head){
	struct node *temp = head;
	while(temp!=NULL){
		printf("---> %d\n", temp->data);
		temp=temp->next;
	}
}

int main() {
	struct node *head;
	struct node *one;
	struct node *two;
	
	one=malloc(sizeof(struct node));
	two=malloc(sizeof(struct node));
	
	one->data=100;
	two->data=200;
	
	head=one;
	one->next=two;
	two->next=NULL;
	
	printf("\nLinked List before operations :\n");
	printNode(head);
	
	head=addNodeAtEnd(head, 400);
	head=addNodeAtIndex(head, 888, 1  );
	
	printf("\nLinked List after operations :\n");
	printNode(head);
	

//	printf("\nLinked List after sorting operation :\n");
//	sortLinkedList(head);
//	printNode(head);
	
	
}