#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;
    int i, j, k;

    // Matrix A da size lo
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    // Matrix B da size lo
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &p, &q);

    // Check multiplication possible hai ya nahi
    if (n != p) {
        printf("Matrix multiplication not possible! (columns of A ≠ rows of B)");
        return 0;
    }

    // Matrix A input
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Matrix B input
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize C matrix to 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Result print karo
    printf("Resultant Matrix C (A x B) is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
return 0;
}
