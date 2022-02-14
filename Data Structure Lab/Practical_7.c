#include <stdio.h>
#include <stdlib.h>
#define R 4
#define C 5
void spiralOfMatrix(int enrow, int encol, int **arr1)
{
	int i, rowind = 0, colind = 0;
	while (rowind < enrow && colind < encol)
	{
		for (i = colind; i < encol; ++i)
		{
			printf("%d ", arr1[rowind][i]);
		}
		rowind++;
		for (i = rowind; i < enrow; ++i)
		{
			printf("%d ", arr1[i][encol - 1]);
		}
		encol--;
		if (rowind < enrow)
		{
			for (i = encol - 1; i >= colind; --i)
			{
				printf("%d ", arr1[enrow - 1][i]);
			}
			enrow--;
		}
		if (colind < encol)
		{
			for (i = enrow - 1; i >= rowind; --i)
			{
				printf("%d ", arr1[i][colind]);
			}
			colind++;
		}
	}
}
int main()
{
	int i, j;
	int *arr[R];
	for (i = 0; i < R; i++)
		arr[i] = (int *)malloc(C * sizeof(int)); // Dynamically Allocating
	int count = 0;
	for (i = 0; i < R; i++)
		for (j = 0; j < C; j++)
			arr[i][j] = ++count;
	printf("The given array in matrix form is : \n");
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("The spiral form of above matrix is: \n");
	spiralOfMatrix(R, C, arr);
	return 0;
}
