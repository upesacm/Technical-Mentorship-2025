#include <stdio.h>

int i = 0;
int j = 0;
int temp;
int main() {
    int a[100];
    int n;
    int flag;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n - 1; i++) {
        flag = 0;  // reset flag each pass
        for(j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) { // already sorted
            break;
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
