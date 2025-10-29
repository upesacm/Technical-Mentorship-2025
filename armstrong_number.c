#include<stdio.h>

int main(){
    int num , originalnum , n=0 , result = 0; // n denotes the power to which the digits of number will be multiplied
    printf("Enter the desired number: ",num); //INPUT OF NUMBER FROM USER
    scanf("%d",&num);

    originalnum = num;
    
    //CALCULATION OF NUMBER OF DIGITS 
    while(originalnum>0){
        originalnum = originalnum /10; //Removing the digits till num is greater than 0
        n++; //This increment the power of digits 
    }
    printf("The number of digits are %d\n",n);
    
    originalnum = num; // Reset originalnum to its original value(num)

    while(originalnum>0){
        int rem = originalnum % 10; //Taking the last  digit to compute
        
        int power=1; // Started Power from 1 as taking 0 would cause answer to be 0
        for(int i=0;i<n;i++){ 
            power = power * rem; // According to the above loop value of n this loop takes input of n and then i becomes the power of digits 
        }
        result = result + power; // Starting result from 0 and then ading power from the prv line and adding till the originalnum is 0
        originalnum = originalnum / 10; //Removing the last digits 
    }

    if ( result == num){
        printf("The number is armstrong number\n");
    }else{
        printf("The number is not armstrong number\n");
    }
    return 0;
}