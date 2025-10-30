// C program to check whether the input number is Armstrong number or not.
#include <stdio.h>
#include <math.h>

int main() {
    int num1, temp, digits = 0, arm = 0;
    int result;

    while(1)
    {
        printf("Enter the number of your choice (n > 0):"); //Taking number as an input by the user.
        result = scanf("%d", &num1);
        

        if (result == 1 && num1 > 0) {
            break; // Valid number entered, exit the loop
        } 
        else 
        {
            printf("Invalid input! Please enter a positive number.\n");

            // Clear the invalid input from the buffer
            while (getchar() != '\n');
        }    
    
    }

    
    int original = num1;   

    //counting number of digits
    temp = num1;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    //calculating Armstrong sum
    temp = num1;
    while (temp > 0) {
        int temp_2 = temp % 10;
        arm += pow(temp_2, digits);
        temp /= 10;
    }

    //check Armstrong condition
    if (original == arm) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}