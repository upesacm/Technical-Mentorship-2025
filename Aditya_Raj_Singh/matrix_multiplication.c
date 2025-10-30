//Matrix Multiplication
#include<stdio.h>
int main(){
    int n,i,j,p;
    printf("Enter dimension for the both the square matrices: ");
    scanf("%d",&n);

    int A[n][n];
    int B[n][n];
    int C[n][n];

    if(n>=2 && n<=3){
        printf("Enter the values for the first matrix ");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d", &A[i][j]);
            }
        }
        }printf("Enter the values for the second matrix ");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d", &B[i][j]);
        }
    }for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                C[i][j]=0;
                for(p=0;p<n;p++){
                C[i][j]= C[i][j] + ( A[i][p] * B[p][j] );
            } 
                }
            }
printf("The multiplication of two matrices is:\n");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d  ", C[i][j]);
        }printf("\n");
    }
                
}