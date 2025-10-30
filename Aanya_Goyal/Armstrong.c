#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,original_num,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    original_num=num;
    int remainder=0;
    while(num!=0)
    {
        remainder=num%10;
        num=num/10;
        count++;
        }
        num=original_num;
        while(num!=0){
            remainder=num%10;
            sum=sum+pow(remainder,count);
            num=num/10;
        }

        if(sum==original_num){
            printf("%d is an Armstrong number",original_num);
            }
            else{
            printf("%d is not an Armstrong number",original_num);
            }
        
            return 0;
        
}