#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, x = 0, num, m;
	printf("Enter how many random number to generate in range of 1 to 100: ");
	scanf("%d", &n);
	while (n > 0)
	{
		num = rand() % 100;
		printf("%d : ", num);
		if (num == 0)
		{
			printf("zero\n");
			continue;
		}
		int revNum = 0;
		while (num > 0)
		{
			revNum = revNum * 10 + num % 10;
			num /= 10;
		}
		while (revNum > 0)
		{
			int x = revNum % 10;
			if (x == 1)
			{
				printf("One ");
			}
			else if (x == 2)
			{
				printf("Two ");
			}
			else if (x == 3)
			{
				printf("Three ");
			}
			else if (x == 4)
			{
				printf("Four ");
			}
			else if (x == 5)
			{
				printf("Five ");
			}
			else if (x == 6)
			{
				printf("Six ");
			}
			else if (x == 7)
			{
				printf("Seven ");
			}
			else if (x == 8)
			{
				printf("Eight ");
			}
			else if (x == 9)
			{
				printf("Nine ");
			}
			else
			{
				printf("Zero ");
			}
			revNum /= 10;
		}
		printf("\n");
		n--;
	}
	return 0;
}