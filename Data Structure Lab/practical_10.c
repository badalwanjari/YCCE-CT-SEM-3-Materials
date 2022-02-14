#include <stdio.h>
#include <stdlib.h>
int N = 50, s[50], count = 0;

// check wheather stack is full or not
int isFull()
{
    if (count != N)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// check wheather stack is empty or not
int isEmpty()
{
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// inset element at top
void push(int data)
{
    if (isFull())
    {
        return;
    }
    else
    {
        s[count] = data;
        count++;
    }
}

// seek function gives element at index i
int seek(int i)
{
    return s[i];
}

// remove element at top
void pop()
{
    if (isEmpty())
    {
        return;
    }
    else
    {
        count--;
    }
}

int maxElement()
{
    int max = -1;
    for (int i = 0; i < count; i++)
    {
        int temp = seek(i);
        if (max < temp)
        {
            max = temp;
        }
    }
    return max;
}

// print stack
void printStack()
{
    if (isEmpty() == 1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack goes here : \n");
        for (int i = 0; i < count; i++)
        {
            printf("%d --> %d\n", i, s[i]);
        }
    }
}
int main()
{
    int opt, x;
    char ch;
    while(1){
        printf("\n---Menu---\n");
        printf("1. Push Element in stack\n");
        printf("2. Pop Element from stack\n");
        printf("3. Display stack\n");
        printf("4. Greatest (max) Element in stack\n");
        printf("5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("Enter element which you have to add: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            printf("Recently added element is removed!!!\n");
            break;
        case 3:
            printStack();
            break;
        case 4:
            printf("Greatest Element in stack = %d\n", maxElement());
            break;
        case 5:
            exit(1);
        default:
            break;
        }
    }
    return 0;
}