#include <stdio.h>

void quicksort(int a[], int first, int last){
	int i, j, pivot, temp;
	if(first<=last){
		i=first;
		pivot=first;
		j=last;
		while(i<j){
			while(a[i]<=a[pivot] && i<last){
				i++;
			}
			while(a[j]>a[pivot]){
				j--;
			}
			if(i<j){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a, first, j-1);
		quicksort(a, j+1, last);
	}
}

int main() {
	int a[100];
	int n;
	printf("Enter number of element: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	quicksort(a, 0, n-1);
	printf("Sorted Array: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}