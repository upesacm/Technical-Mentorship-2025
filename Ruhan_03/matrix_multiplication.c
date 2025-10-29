#include <stdio.h>
int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k, n;

    printf("Enter the order of the matrices (2 for 2x2, 3 for 3x3): ");
    scanf("%d", &n);

    if (n != 2 && n != 3) {
        printf("Invalid size! Please enter 2 or 3.\n");
        return 1;
    }

    printf("\nEnter elements of Matrix A (%dx%d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%dx%d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
