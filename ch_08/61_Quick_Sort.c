/*Sort numbers using Quick Sort Algorithm*/
#include <stdio.h>

void QuickSort(int *, int, int);
int Partation(int *, int, int);

int main(){
    int arr[10] = {11, 2, 9, 13, 57, 25, 17, 1, 90, 3};
    int i;

    printf("Array before sorting: \n");

    for (i=0; i < 10; i++){
        printf("%d\t", arr[i]);
    }

    QuickSort(arr, 0, 9);

    printf("\n");

    printf("Array after sorting: \n");

    for (i=0; i < 10; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}

void QuickSort(int *a, int lower, int upper){
    int i;

    if(upper > lower){
        i = Partation(a, lower, upper);
        QuickSort(a, lower, i-1);
        QuickSort(a, i+1, upper);
    }
}

int Partation(int *a, int lower, int upper){
    int i, p, q, t;
    
    p = lower + 1;
    q = upper;
    i = a[lower];

    while (q >= p){
        while (a[p] < i){
            p++;
        }
        
        while (a[q] > i){
            q--;
        }
        
        if (q>p){
            t = a[p];
            a[p] = a[q];
            a[q] = t;
        }
        
    }

    t = a[lower];
    a[lower] = a[q];
    a[q] = t;

    return q;
    
}