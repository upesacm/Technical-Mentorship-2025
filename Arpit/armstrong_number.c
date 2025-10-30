// Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem;
    double sq,arm=0,check;

    printf("Enter value of n: ");
    scanf("%d",&n);
    check=n;
    int temp=n,digit=0;
    while(temp>0)
    {
        temp/=10;
        digit++;

    }    
    while (n>0)
    {
        rem=n%10;
        sq=pow(rem,digit);
        arm=arm+sq;
        n/=10;
        
    }
    if (arm==check)
    {
        printf("it is a armstrong number");
    }
    else
    {
        printf("it is not a armstrong number");
    }
    
    return 0;

}