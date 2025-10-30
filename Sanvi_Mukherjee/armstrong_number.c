#include <stdio.h>

int main() {

int num,ognum,temp,rem;
int digits=0,result=0;

printf("Enter a number: ");
scanf("%d",&num);
    
ognum=num;
for(temp=num;temp!=0;temp=temp/10)
{
    digits++;
}

for(temp=num;temp!=0;temp=temp/10)
{
    rem=temp%10;
    int pow=1;
    for(int i=1;i<=digits;i++)
    {
        pow=pow*rem;
    }
 result=result+pow; 
}

if(result==ognum)
printf("It is an armstrong number\n");
else
printf("It is not an armstrong number\n");

    return 0;
}
