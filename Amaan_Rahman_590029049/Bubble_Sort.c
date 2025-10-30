// C program to implement Bubble Sort 

#include <stdio.h>

#define maximum 1000  // Maximum limit for array elements

int main() {
    int n;
    int arr[maximum];
    int valid_input = 0;

    // Input validation for array size
    while (!valid_input) {
        printf("Enter the number of elements (%d): ", maximum);
        if (scanf("%d", &n) == 1 && n > 0 && n <= maximum) {
            valid_input = 1;
        } else {
            printf("Invalid input! Please enter a positive integer up to %d\n", maximum);
            while (getchar() != '\n'); // clear buffer
        }
    }

    // Input array elements with validation
    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Element [%d]: ", i + 1);
            if (scanf("%d", &arr[i]) == 1)
                break;
            else {
                printf("Invalid input! Please enter an integer.\n");
                while (getchar() != '\n'); // clear buffer
            }
        }
    }

    // Bubble Sort (ascending order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nSorted Array (Ascending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}