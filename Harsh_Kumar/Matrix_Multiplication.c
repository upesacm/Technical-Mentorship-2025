#include <stdio.h>
//Writing a program that performs matrix multiplication, sums the elements of the resulting matrix, and finds the last digit of that sum.
int main (){
    int mat1[2][2] = {{1,2},{3,4}};
    int mat2[2][2] = {{5,6},{8,9}};
    int result[2][2];
    int sum = 0;
    int lastDigit;
    printf("Performing matrix multiplication\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            result[i][j] = 0;
            for (int k=0;k<2;k++){
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Resulting Matrix:\n");
    for(int i =0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    printf("\nAdding the elements\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            sum +=result[i][j];
        }
    }
    printf("Totalsum:%d\n",sum);
    printf("\nFinding the last digit of the sum \n");
    lastDigit=sum%10;
    printf("The last digit is:%d\n",lastDigit);
    return 0;
}
