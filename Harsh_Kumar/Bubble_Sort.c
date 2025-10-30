#include <stdio.h>
int mag(int n){
    if (n<0){
        return -n;
    }
    return n;
}
void bubbleSort(int arr[], int n){
    int temp;
    for (int i=0; i<n-1; i++){
        for (int j=0;j<n-1-i;j++){
            if (mag(arr[j]) > mag(arr[j+1])){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main () {
    int arr[] = {-10, 2, -5, 1, -8, 3};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr,n);
    printf("Array sorted by magnitude:\n");
    for (int i =0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}