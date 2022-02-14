#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};

int main() {
	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));
	
	one->data = 1;
	two->data = 2;
	three->data = 3;
	
	head=one;
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	
	//Add node at begining
	struct node *zero;
	zero = malloc(sizeof(struct node));
	zero->data=0;
	zero->next=head;
	head=zero;
	
	
	//Add node at ending
	struct node *four;
	four = malloc(sizeof(struct node));
	four->data=4;
	four->next=NULL;
	
	struct node *temp1=head;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next = four;
	
	//Add note at Middle
	struct node *oddNode;
	oddNode = malloc(sizeof(struct node));
	oddNode->data=5;
	int pos=6;
	
	struct node *temp2=head;
	for(int i=2;i<pos;i++){
		if(temp2->next != NULL){
			temp2=temp2->next;
		}
	}
	oddNode->next= temp2->next;
	temp2->next = oddNode;
	
	struct node *temp = head;
	while(temp!=NULL){
		printf("---> %d ", temp->data);
		temp=temp->next;
	}
	
}