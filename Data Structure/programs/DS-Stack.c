#include <stdio.h>
#include <stdlib.h>
//zero instruction program / stack instruction
int s[10], count=0, N=10;

int isFull(){
	if(count!=N){
		return 0;
	}
	else{
		return 1;
	}
}

int isEmpty(){
	if(count==0){
		return 1;
	}
	else{
		return 0;
	}
}

void push(int data){
	if(isFull()){
		return ;
	}
	else{
		s[count]=data;
		count++;
	}
}

void pop(){
	if(isEmpty()){
		return;
	}
	else{
		count--;
	}
}

void ADD(){
	if(isEmpty() || count==1){
		return;
	}
	else{
		s[count-2] = s[count-2] + s[count-1];
		count--;
	}
}

void SUB(){
	if(isEmpty() || count==1){
		return;
	}
	else{
		s[count-2] = s[count-2] - s[count-1];
		count--;
	}
}

void MUL(){
	if(isEmpty() || count==1){
		return;
	}
	else{
		s[count-2] = s[count-2] * s[count-1];
		count--;
	}
}
void DIV(){
	if(isEmpty() || count==1){
		return;
	}
	else{
		s[count-2] = s[count-2] / s[count-1];
		count--;
	}
}

void printStack(){
	if(isEmpty()==1){
		printf("\nStack is empty");
	}
	else{
		printf("Stack goes here : \n");
//		for(int i=count-1;i>=0;i--){
//			printf("%d --> %d\n", i, s[i]);
//		}
		
		for(int i=0;i<count;i++){
			printf("%d --> %d\n", i, s[i]);
		}
	}
}

int main() {
	
	push(10);
	push(20);
	ADD();
	printStack();
	return 0;
}
