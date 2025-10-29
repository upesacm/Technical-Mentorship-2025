#include<stdio.h>
int main(){
    int n,n1,m,m1;
    printf("Enter the size of rows of the matrices: ");
    scanf("%d",&n);
    printf("Enter the size of column of the matrices: ");
    scanf("%d",&n1);
    int matrix1[n][n1];
   int matrix2[n1][n];
    int mul[n][n];

    int i,j,k;
    
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            printf("Enter  the elements of matrix1[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
        }

      for(i=0;i<n1;i++){
        for(j=0;j<n;j++){
            printf("Enter  the elements of matrix2[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
        } 

        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mul[i][j]=0;
            for(k=0;k<n1;k++){
            mul[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
        }
    }
        
        printf("The resultant matrix after multiplication two matrices are:\n");
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",mul[i][j]);
            
        }
        printf("\n");
        }  
    return 0;
}
