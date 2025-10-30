#include <stdio.h>
#include <math.h>
int main() {
    
int a,temporary1,temporary2,rem;
int digit=0;
int answer=0;

printf("Enter a number:");
scanf("%d", &a);
temporary1=a;
temporary2=a;
  
while(a!=0)
{
a=a/10;
digit++;
}

while(temporary1!=0)
{
    rem=temporary1%10;
    answer=answer+pow(rem,digit);
    temporary1=temporary1/10;
}

if(answer==temporary2)
printf("IT IS A ARMSTRONG NUMBER");
else
printf("NOT A ARMSTRONG NUMBER");




return 0;
}
  
