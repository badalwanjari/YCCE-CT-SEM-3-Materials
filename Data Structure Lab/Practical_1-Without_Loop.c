#include <stdio.h>
#include <math.h>
int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int count=log10(n)+1;
	
	printf("Number is of %d digit/s", count);
	return 0;
}