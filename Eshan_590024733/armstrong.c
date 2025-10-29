#include<stdio.h>

int main() {
    int num, r, sum, count=1;
    while (count <= 500) {
        num = count;
        sum = 0;
        while (num) {
            r = num % 10;
            sum += r * r * r;
            num /= 10;
        }
        if (count == sum) {
            printf("%d\n", count);
        }
        count++;
    }
    return 0;
}
