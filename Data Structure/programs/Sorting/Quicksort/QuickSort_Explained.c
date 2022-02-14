#include <stdio.h>

//function to find the partition position
int partition(int a[], int first, int last){

    //select rightmost element as pivot
    int pivot = a[last];

    //pointer for greater element
    int i = first - 1;

    //traverse each element of the array
    //compare them with the pivot
    for(int j=first;j<last;j++){
        if(a[j]<pivot){
            //if element smaller than pivot is found
            //swap it with the greater element pointed by i
            i++;

            //swap element at i with element at j
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }

    //swap the pivot element with the greater element at i
    int temp = a[i+1];
    a[i+1] = a[last];
    a[last] = temp;

    //return the partition point
    return i+1;
}


//fuction
void quicksort(int a[], int first, int last){
    if(first<last){

        //find the pivot element such that
        //elements smaller than pivot are on left of pivot
        //elements greater than pivot are one right of pivot

        int pi = partition(a, first, last);

        //recursive call on the left of pivot
        quicksort(a, first, pi-1);

        //recursive call on the left of pivot
        quicksort(a, pi+1, last);

    }
}

int main(){
    int n;

    //input value of n
    printf("Enter value of n : ");
    scanf("%d", &n);
    int ar[100];

    //input element of array
    printf("Enter elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", &ar[i]);
    }

    //quicksort function call
    quicksort(ar, 0, n-1);

    //print sorted Array
    printf("Sorted Array : ");
    for(int i=0;i<n;i++){
        printf("%d ", ar[i]);
    }
}