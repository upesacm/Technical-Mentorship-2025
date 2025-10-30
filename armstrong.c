#include <stdio.h>
int main(){
    int num,orignal,remainder,sum=0;
    printf("enter a integer: ");
    scanf("%d",&num);
    orignal=num;
    while(orignal!=0){
        remainder=orignal%10;
        sum+=remainder*remainder*remainder;
        orignal/=10;
    }
    if(sum==num){
        printf("the number is an armstrong number %d",num);
    }
    else{
        printf("the number is not an armstrong number %d",num);
    }
         return 0;

}