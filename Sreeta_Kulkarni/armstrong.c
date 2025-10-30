
#include <stdio.h>

#include <math.h>

 int main() {

int i, original, num, n=0, sum=0;
int temp, d, dig=0;

printf("Enter number: ");
scanf("%d", &num);

original=num;
temp=num;
 while(temp != 0){
temp/=10;
++n;
 }
temp=num;
 while(temp>0){
d=temp%10;
sum+=pow(d,n);
temp/=10;
 }
 if(original == (int)sum){
printf("Number is armstrong");
else{
printf("Number is not armstrong. ");
}}
 }
