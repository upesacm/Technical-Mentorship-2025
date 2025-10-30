#include <stdio.h>
int main()
{
    int num, digit, armstrongn;
    printf("Enter an integer: ");
    scanf("%d", &num);
    armstrongn = 0;
    int originalNum = num;
    while (originalNum != 0)
    {
        int remainder = originalNum % 10;
        armstrongn += remainder * remainder * remainder;
        originalNum /= 10;
        digit++;
    }
    printf("The Armstrong number is: %d\n", armstrongn);
    if (armstrongn == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
