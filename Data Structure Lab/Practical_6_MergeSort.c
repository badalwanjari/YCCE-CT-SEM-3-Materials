#include <stdio.h>
#include <stdlib.h>
void merge(int *arr, int left, int mid, int right){
    int subArrOne = mid + 1 - left;
    int subArrTwo = right - mid;
    int*leftArr = (int*)malloc(subArrOne*subArrOne);
    int*rightArr = (int*)malloc(subArrTwo*subArrOne);
    for(int i=0;i<subArrOne;i++){
        leftArr[i]=arr[left+i];
    }
    for(int i=0;i<subArrTwo;i++){
        rightArr[i]=arr[mid+1+i];
    }
    int idxLeftArr=0, idxRightArr=0, idxSortedArr = left;
    while(subArrOne>idxLeftArr && subArrTwo>idxRightArr){
        if(leftArr[idxLeftArr]<rightArr[idxRightArr]){
            arr[idxSortedArr] = leftArr[idxLeftArr];
            idxLeftArr++;
            idxSortedArr++;
        }
        else{
            arr[idxSortedArr] = rightArr[idxRightArr];
            idxRightArr++;
            idxSortedArr++;
        }
    }
    while(subArrOne>idxLeftArr){
        arr[idxSortedArr] = leftArr[idxLeftArr];
        idxLeftArr++;
        idxSortedArr++;
    }
    while(subArrTwo>idxRightArr){
        arr[idxSortedArr] = rightArr[idxRightArr];
        idxRightArr++;
        idxSortedArr++;
    }
}

void mergesort(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    int mid = (start + end)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    merge(arr, start, mid, end);
}
int main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter elements of Array : ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, n-1);

    printf("Sorted Array : ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}