//Armstrong
#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,i=0,j=0,n=0,arms=0;
    printf("Enter a number to check whether it's a armstrong number or not ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp=temp/10;
        n++;
    }
    temp=num;
    while(temp>0){
        i=temp%10;
        temp=temp/10;
        arms=arms+(int)round(pow(i,n));
    }
    
if(num==arms){
    printf("%d is an Armstrong number",arms);
}else{
    printf("%d is not an Armstrong number",num);
}}