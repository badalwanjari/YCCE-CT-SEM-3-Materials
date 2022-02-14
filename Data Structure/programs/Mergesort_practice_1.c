#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int left, int mid, int right){
	int subArrOne=mid+1-left;
	int subArrTwo=right- mid;
	int leftArr[subArrOne], rightArr[subArrTwo];
	for(int i=0;i<subArrOne;i++){
		leftArr[i]=a[left+i];
	}
	for(int i=0;i<subArrTwo;i++){
		rightArr[i]=a[mid+1+i];
	}
	int indexofLeftArr=0, indexofRightArr=0, indexOfSortedArr=left;
	while(indexofLeftArr<subArrOne && indexofRightArr<subArrTwo){
		if(leftArr[indexofLeftArr]<rightArr[indexofRightArr]){
			a[indexOfSortedArr++]=leftArr[indexofLeftArr++];
		}
		else{
			a[indexOfSortedArr++]=rightArr[indexofRightArr++];
		}
	}
	while(indexofLeftArr<subArrOne){
		a[indexOfSortedArr++]=leftArr[indexofLeftArr++];
	}
	while(indexofRightArr<subArrTwo){
		a[indexOfSortedArr++]=rightArr[indexofRightArr++];
	}
}
//void merge(int a[], int left, int mid, int right){
//	int subarrone= mid+1-left;
//	int subarrtwo= right - mid;
//	int leftarr[subarrone], rightarr[subarrtwo];
//	for(int i=0;i<subarrone;i++){
//		leftarr[i]=a[left+i];
//	}
//	for(int i=0;i<subarrtwo;i++){
//		rightarr[i]=a[mid+1+i];
//	}
//	int indexofleftarr=0, indexofrightarr=0, indexofsortedarr=left;
//	while(subarrone>indexofleftarr && subarrtwo>indexofrightarr){
//		if(leftarr[indexofleftarr]<rightarr[indexofrightarr]){
//			a[indexofsortedarr++]=leftarr[indexofleftarr++];
//		}
//		else{
//			a[indexofsortedarr++]=rightarr[indexofrightarr++];
//		}
//	}
//	while(subarrone>indexofleftarr){
//		a[indexofsortedarr++]=leftarr[indexofleftarr++];
//	}
//	while(subarrtwo>indexofrightarr){
//		a[indexofsortedarr++]=rightarr[indexofrightarr++];
//	}
//}
void Mergesort(int a[], int start, int end){
	if(start>=end){
		return;
	}
	int mid=start + (end-start)/2;
	Mergesort(a, start, mid);
	Mergesort(a, mid+1, end);
	merge(a, start, mid, end);
}
int main() {
	int a[1000], n;
	printf("Enter number of element: ");
	scanf("%d", &n);
	printf("Element of Array: ");
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	Mergesort(a, 0, n);
	printf("Sorted Array: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}