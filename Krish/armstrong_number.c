#include<stdio.h>
int main(){
int n,og,r,sum=0;
printf("Enter your number: ");
scanf("%d",&n);
og=n;
for(int i=0;n>0;i++){
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
if(og==sum){
    printf("%d:The number is armstrong",sum);
}
else{
    printf("%d:The number is not armstrong",sum);
}
    return 0;
}
