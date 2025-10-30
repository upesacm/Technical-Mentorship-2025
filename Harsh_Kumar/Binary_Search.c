#include <stdio.h>
int main (){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key, low, high, mid;
    low=0;
    high=n-1;
    int found=0;
    printf("Enter element to search:");
    scanf("%d", &key);
    for (; low <= high; ){
        mid = (low+high)/2;
        if (arr[mid] == key) {
            printf("Element is at position %d\n", mid+1);
            found = 1;
            break;
        }
        else if (arr[mid]<key){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
}
if (!found)
printf("Element not found in the given array.\n");
return 0;
}