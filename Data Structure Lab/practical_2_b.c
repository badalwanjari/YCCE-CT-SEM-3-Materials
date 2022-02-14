#include <stdio.h>
#include<stdlib.h>
int main() {
	int n, x=0;
	printf("Enter how many random number to generate in range of 1 to 100: ");
	scanf("%d", &n);
	printf("Random Numbers : ");
	while(n>0){
		x=rand()%100;
		printf("%d\t", x);
		n--;
	}
}