#include <stdio.h>
int main()
{
    int inputnum, finalsum = 0;
    printf("Enter a number: ");
    scanf("%d", &inputnum);
    int storednum = inputnum;
    while (storednum > 0)
    {
        int slicednum = storednum % 10;
        int cuber = slicednum*slicednum*slicednum;
        finalsum += cuber;
        storednum = storednum / 10;
    }
    if (finalsum == inputname)
    {
        printf("This is an armstrong number\n");
    }
    else
    {
        printf("This is not an armstrong number\n");
    }
}
