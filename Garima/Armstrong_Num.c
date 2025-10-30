#include <stdio.h>
#include <math.h>

int main()
{

    int n, r, temp, count = 0;
    double sum = 0;

    printf("enter the number :  ");
    scanf("%d", &n);

    temp = n;

        while (n > 0)
    {
        count++;
        n = n / 10;
    }

    while (n > 0)
    {
        r = n % 10;
        sum = sum + pow(r, count);
        n = n / 10;
    }

    if (n == sum)
    {
        printf("The number entered is ARMSTRONG");
    }

    else
    {
        printf("The number entered is not ARMSTRONG");
    }

    return 0;
}