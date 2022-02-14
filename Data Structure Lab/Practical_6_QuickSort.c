#include <stdio.h>
#include <stdlib.h>
void quicksort(int* arr, int first, int last){
    if(first<last){
        int pivot = first;
        int i = first;
        int j = last;
        while(i<j){
            while(arr[i]<=arr[pivot] && i < last){
                i++;
            }
            while(arr[j]>arr[pivot]){
                j--;
            }
            if(i<j){
                int temp = arr[i];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        int temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        quicksort(arr, first, j-1);
        quicksort(arr, j+1, last);
    }

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
    quicksort(arr, 0, n-1);

    printf("Sorted Array : ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}