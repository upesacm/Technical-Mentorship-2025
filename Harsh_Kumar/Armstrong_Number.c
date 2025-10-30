#include <stdio.h>
int isArmstrong(int num){
    

int original = num;
int sum = 0;
int digit;
for (int i=num; i>0;i/=10){
    digit = i%10;
    sum += digit*digit*digit;
}
if (sum == original){
    return 1;
}
return 0;
}
int main(){
    int a, b;
    printf("Enter start number (a):");
    scanf("%d", &a);
    printf("Enter end number (b):");
    scanf("%d", &b);
    printf("Printing non-Armstrong Numbers between %d and %d:\n", a, b);
    for (int i=a;i<=b;i++){
        if (isArmstrong(i)){
          continue;
        }
        printf("%d ",i);
    }
    return 0;
}