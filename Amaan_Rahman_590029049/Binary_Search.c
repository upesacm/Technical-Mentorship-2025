// C program to do a linear search in array given by the user

#include <stdio.h>
#define maximum 1000000  // Safe upper limit for array elements

// Defining functions to use 
void getValidArray(int arr[], int n);
void bubbleSort(int arr[], int n);
int binarySearch(int arr[], int n, int key);

// Function for getting entries
void getValidArray(int arr[], int n) {
    printf("\nEnter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Element [%d]: ", i + 1);
            if (scanf("%d", &arr[i]) == 1)
                break;
            else {
                printf("Invalid input! Please enter an integer.\n");
                while (getchar() != '\n'); // clear invalid input
            }
        }
    }
}

 //Function for bubbleSort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Function for binarySearch
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid; // found
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // not found
}

int main() {
    int n, key;
    int arr[maximum];
    int valid = 0;

    // Input validation for array size
    while (!valid) {
        printf("Enter number of elements (%d): ", maximum);
        if (scanf("%d", &n) == 1 && n > 0 && n <= maximum) {
            valid = 1;
        } else {
            printf("Invalid input! Please enter a positive integer up to %d\n", maximum);
            while (getchar() != '\n'); // clear invalid input
        }
    }

    // Get validated array input
    getValidArray(arr, n);

    //Sort the array before binary search
    bubbleSort(arr, n);

    //Get the key to search for
    while (1) {
        printf("\nEnter the element to search for: ");
        if (scanf("%d", &key) == 1)
            break;
        else {
            printf("Invalid input! Please enter an integer.\n");
            while (getchar() != '\n');
        }
    }

    //Perform binary search
    int position = binarySearch(arr, n, key);

    // Display result
    if (position != -1)
        printf("\nElement %d found at position %d (in sorted array).\n", key, position + 1);
    else
        printf("\nElement %d not found in the array.\n", key);

    return 0;
}