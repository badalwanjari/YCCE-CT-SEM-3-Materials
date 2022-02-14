#include <stdio.h>
int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int count=0;
	while(n>0){
		count++;
		n/=10;
	}
	printf("Number is of %d digit/s", count);
	return 0;
}