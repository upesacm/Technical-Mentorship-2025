//this code is valid upto 3 digits number
#include<stdio.h>
int main() 
{
    int num,x;
    int sum=0;
    printf("enter the value of num:");
    scanf("%d",&num);
    x=num;
    while(num>0)
    {
        sum=sum+(num%10)*(num%10)*(num%10);
        num=num/10;

    }
    if(sum==x)
    {
        printf("%d is a armstrong number",x);
    }
    else{
        printf("%d is not a armstrong number",x);
    }
    return 0;

}