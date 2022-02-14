#include <stdio.h>
void merge(int a[], int left, int mid, int right){
    int subArrOne=mid+1-left;
    int subArrTwo=right-mid;
    int leftArr[subArrOne], rightArr[subArrTwo];
    for(int i=0;i<subArrOne;i++){
        leftArr[i]=a[left+i];
    }
    for(int i=0;i<subArrTwo;i++){
        rightArr[i]=a[mid+1+i];
    }
    int indexOfSortedArr=left, indexOfLeft=0, indexOfRight=0;
    while(subArrOne>indexOfLeft && subArrTwo>indexOfRight){
        if(leftArr[indexOfLeft]<rightArr[indexOfRight]){
            a[indexOfSortedArr++]=leftArr[indexOfLeft++];
        }
        else{
            a[indexOfSortedArr++]=rightArr[indexOfRight++];
        }
    }
    while(subArrOne>indexOfLeft){
        a[indexOfSortedArr++]=leftArr[indexOfLeft++];
    }
     while(subArrTwo>indexOfRight){
        a[indexOfSortedArr++]=rightArr[indexOfRight++];
    }
}
void mergesort(int a[], int start, int end){
    if(start>=end){
        return;
    }
    int mid=start + (end - start)/2;
    mergesort(a, start, mid);
    mergesort(a, mid+1, end);
    merge(a, start, mid, end);
}
int main()
{
    int a[100];
    int n;
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}