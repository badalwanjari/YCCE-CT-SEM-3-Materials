#include <stdio.h>

void bubbleSort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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