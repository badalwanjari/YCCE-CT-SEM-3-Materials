#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
//Sorting of Linked List
void sortLinkedList(struct node** head_ref){
	struct node *current = *head_ref, *index = NULL;
	int temp;
	if (head_ref == NULL){
		return;
	}
	else{
		while (current != NULL){
			// index points to the node next to current
			index = current->next;
			while (index != NULL) {
				if (current->data > index->data) {
					temp = current->data;
					current->data = index->data;
					index->data = temp;
				}
				index = index->next;
			}
			current = current->next;
		}
	}
}
 void printLinkedList(struct node *temp){
	 while(temp!=NULL){
		printf("---> %d ", temp->data);
		temp=temp->next;
	}
	printf("\n");
 }


int main() {
	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *four;
	struct node *five;
	struct node *six;
	
	one=malloc(sizeof(struct node));
	two=malloc(sizeof(struct node));
	three=malloc(sizeof(struct node));
	four=malloc(sizeof(struct node));
	five=malloc(sizeof(struct node));
	six=malloc(sizeof(struct node));
	
	one->data = 99;
	two->data = 1;
	three->data = 12;
	four->data = 55;
	five->data = 80;
	six->data = 900;
	
	head=one;
	one->prev = head;
	one->next = two;	
	two->prev = one;
	two->next = three;
	three->prev = two;
	three->next = four;
	four->prev = three;
	four->next = five;	
	five->prev = four;
	five->next = six;
	six->prev = five;
	six->next = NULL;
	printLinkedList(head);
	sortLinkedList(&head);
	printLinkedList(head);
}