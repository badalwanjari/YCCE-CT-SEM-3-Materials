#include <stdio.h>
#include <stdlib.h>
// #include <unistd.h>
struct node{
	int data;
	struct node *next;
};
int main() {
	//initialization
	struct node *head;

	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	
	//allocation
	one=malloc(sizeof(struct node));
	two=malloc(sizeof(struct node));
	three=malloc(sizeof(struct node));
	
	//assigning values
	one->data = 1;
	two->data = 2;
	three->data = 3;
	
	//linking data
	head = one;
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	//new node at front
	
	
	
	struct node *temp = head;
	while(temp!=NULL){
		printf("---> %d ", temp->data);
		temp=temp->next;
	}

}