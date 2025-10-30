#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == x) {
            return mid;
        }

        if (array[mid] < x) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }
    
    return X;
}
   if (result == X) {
        printf("Element is not present in array\n");
    } else {
        printf("Element is found at index %d\n", result);
    }
