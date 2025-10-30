#include <stdio.h>
int  main(){
    int r1,r2,c1,c2,i,j;
    int matrixA[i][j],matrixB[i][j];
    printf("Enter the size of the matrixA: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the size of the matrixB: ");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of matrixA: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("Enter the elements of matrixB: ");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&matrixB[i][j]);
        }
    }
    if(c1!=r2){
        printf("Matrix multiplication is not possible");
    }
    else{
        int result[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                result[i][j]=0;
                for(int k=0;k<c1;k++){
                    result[i][j]+=matrixA[i][k]*matrixB[k][j];
                }
            }
        }
        printf("Resultant Matrix:\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
}