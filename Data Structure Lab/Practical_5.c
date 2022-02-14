#include <stdio.h>
int gcd(int n1, int n2);
int count=0;
int main() {
	int num1 , num2;
	printf("Enter first natural numbers: ");
	scanf("%d", &num1);
	printf("Enter second natural numbers: ");
	scanf("%d", &num2);
	printf("GCD of %d and %d = %d", num1, num2, gcd(num1, num2));
	printf("\nNumber of recursive calls: %d", count);
	return 0;
}
int gcd(int n1, int n2){
	if(n2==0){
		return n1;
	}
	else{
		count++;
		return gcd(n2, n1%n2);
	}
}