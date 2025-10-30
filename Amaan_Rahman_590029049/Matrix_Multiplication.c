// C program to multiply two matrices with one another

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int valid_input = 0;

    // Input validation for dimensions of first matrix
    while (!valid_input) {
        printf("Enter rows and columns of the first matrix: ");
        if (scanf("%d %d", &r1, &c1) == 2 && r1 > 0 && c1 > 0) {
            valid_input = 1;
        } else {
            printf("Invalid input! Please enter two positive integers.\n");
            while (getchar() != '\n'); // clear invalid input
        }
    }

    valid_input = 0;
    // Input validation for dimensions of second matrix
    while (!valid_input) {
        printf("Enter rows and columns of the second matrix: ");
        if (scanf("%d %d", &r2, &c2) == 2 && r2 > 0 && c2 > 0) {
            valid_input = 1;
        } else {
            printf("Invalid input! Please enter two positive integers.\n");
            while (getchar() != '\n');
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    // Input first matrix
    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            while (1) {
                printf("A[%d][%d] = ", i + 1, j + 1);
                if (scanf("%d", &A[i][j]) == 1)
                    break;
                else {
                    printf("Invalid input! Please enter an integer.\n");
                    while (getchar() != '\n'); // clear buffer
                }
            }
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            while (1) {
                printf("B[%d][%d] = ", i + 1, j + 1);
                if (scanf("%d", &B[i][j]) == 1)
                    break;
                else {
                    printf("Invalid input! Please enter an integer.\n");
                    while (getchar() != '\n');
                }
            }
        }
    }

    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("\nResultant Matrix (C = A × B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}