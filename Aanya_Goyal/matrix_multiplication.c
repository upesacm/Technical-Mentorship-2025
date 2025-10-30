#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10],i,j,k;
    int r1,c1,r2,c2;
    printf("enter rows and columns of 1st matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and columns of 2st matrix:\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("matrix multiplcation not possible\n");
        return 0;
    }

    printf("Enter elements of 1st matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
             printf("Enter elements of 2st matrix:\n");
               for(i=0;i<r2;i++){
                 for(j=0;j<c2;j++){
                   scanf("%d",&a[i][j]);
                }
            }//intializiing result matrix to zero 
                   for(i=0;i<r1;i++)
                   {
                     for(j=0;j<c2;j++)
                     {
                        
                            c[i][j]=0;
                        }
                    } for(i=0;i<r1;i++){
                     for(j=0;j<c2;j++){
                            for(k=0;k<c1;k++){
                               c[i][j]+=a[i][k]*b[k][j];
                            }
                        }
                    }
                     printf("\nResultant Matrix:\n");
                      for (i = 0; i < r1; i++) {
                          for (j = 0; j < c2; j++) {
                              printf("%d\t", c[i][j]);
                                 }
                                  printf("\n");
                             }

    return 0;
                    



                        }
            

