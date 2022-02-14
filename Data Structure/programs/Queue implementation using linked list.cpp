#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue 
{
    int element;
    struct queue *next;
};

struct queue *front=NULL;
struct queue *rear=NULL;

void insert(int);
int del();
void display();

int main()
{
    int num1, num2, choice;
    while(1)
    {
    
    printf("\nEnter choice:");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        {
            printf("Enter the element to be inserted on queue");
            scanf("%d", &num1);
            insert(num1);
            break;
        }
        case 2:
        {
            num2=del();
            if(num2==-9999)
			 printf("Queue is empty");
			 else
			 printf("%d element removed", num2);
            getch();
            break;
        }
        case 3: 
        {
            display();
            getch();
            break;
        }
        case 4: 
        {
		exit(1);
        break;
    	}
        default:
        {
		printf("Invalid choice");
        break;
        }
    }
  }
}

void insert(int value)
{
    struct queue *ptr=(struct queue*)malloc(sizeof(struct queue));
    ptr->element=value;
    if(front==NULL)
    {
    	front=rear=ptr;
    	ptr->next=NULL;
	}
	else{
		rear->next=ptr;
		ptr->next=NULL;
		rear=ptr;
	}
}

int del()
{
	int i;
	if(front==NULL)
	 return(-9999);
	 else
	 {
	 	i=front->element;
	 	front=front->next;
	 	return(i);
		 
	 }
    
}

void display()
{
    struct queue *ptr=front;
    if(front==NULL)
     {
     	printf("Queue is empty");
     	return;
	 }
	 else
	 {
	 	printf("Elements in the queue: ");
	 	while(ptr!=rear)
	 	{
	 		printf("\t%d", ptr->element);
	 		ptr=ptr->next;
		 }
		 printf("\t%d", rear->element);
	 }
	
}
