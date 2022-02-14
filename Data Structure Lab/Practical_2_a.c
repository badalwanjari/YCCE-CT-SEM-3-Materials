#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int num=0;
	while(n>0){
		num=num*10+n%10;
		n/=10;
	}
	printf("Number in word: ");
	while(num>0){
		int x=num%10;		
		if(x==1){
			printf("One ");
		}
		else if(x==2){
			printf("Two ");
		}
		else if(x==3){
			printf("Three ");
		}
		else if(x==4){
			printf("Four ");
		}
		else if(x==5){
			printf("Five ");
		}
		else if(x==6){
			printf("Six ");
		}
		else if(x==7){
			printf("Seven ");
		}
		else if(x==8){
			printf("Eight ");
		}
		else if(x==9){
			printf("Nine ");
		}
		else{
			printf("Zero ");
		}
		num/=10;
	}
}