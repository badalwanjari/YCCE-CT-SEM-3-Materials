#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int element;
    struct stack *next;

} * top;

int isEmpty()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
        return 1;
    }

    return 0;
}

void push(int x)
{
    struct stack *temp;
    temp = (struct stack *)malloc(sizeof(struct stack));
    if (temp == NULL)
    {
        printf("Stack Overflow");
        return;
    }
    temp->element = x;
    temp->next = top;
    top = temp;
    return;
}

void pop()
{
    struct stack *tp = top;
    if (isEmpty() == 0)
    {
        top = top->next;
        free(tp);
    }
    else
    {
        printf("Can't remove element\n");
    }
}

void printList()
{
    struct stack *temp = top;
    if (isEmpty() == 0)
    {
        printf("Stack goes here : \n");
        while (temp != NULL)
        {
            printf("--->%d\n", temp->element);
            temp = temp->next;
        }
    }
}

int main()
{
    printList();
    push(50);
    push(100);
    printList();
    mul();
    printList();
    return 0;
}