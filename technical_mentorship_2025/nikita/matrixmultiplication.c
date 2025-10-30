#include <stdio.h>
int main(){
    int A[20][20],B[20][20],C[20][20];
    int n,i,j,k;//the looping variable used to multiply and sum corresponding elements is "k"
    printf("enter the size of square matrices: ");
    scanf("%d",&n);
    printf("enter the elements of matrix A: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter the elements of matrix B: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            C[i][j]=0;

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("the resultant matrix after multiplication is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;}