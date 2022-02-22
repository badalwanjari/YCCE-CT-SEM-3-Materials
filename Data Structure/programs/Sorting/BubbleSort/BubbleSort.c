#include <stdio.h>

void bubbleSort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
	bubbleSort(a, n);
	printf("Sorted Array: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
