#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, char val)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr)
{
    if (!isEmpty(ptr))
    {
        char x = ptr->arr[ptr->top];
        ptr->top--;
        return x;
    }
}

int precedence(char x){
    if(x=='*' || x=='/'){
        return 3;
    }
    else if(x=='+' || x=='-'){
        return 2;
    }
    else{
        return 0;
    }
}

int isOperator(char x){
    if(x=='+' || x=='-'|| x=='*' || x=='/'){
        return 1;
    }
    else{
        return 0;
    }
}

int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

char* infixtopostfix(char *infix){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char * postfix = (char *)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else{
            if(precedence(infix[i])>precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix; 
}

int main()
{
    char *infix = "a+b+c";

     printf("postfix is: %s", infixtopostfix(infix));
}