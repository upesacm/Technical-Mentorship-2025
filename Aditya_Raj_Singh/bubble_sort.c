//bubble_sort
#include<stdio.h>
int main(){
    int n; 
    printf("Enter a number ");
    scanf("%d",&n);
    int C[n];
    
    printf("Enter the elements to assign in the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&C[i]);
    } printf("The Array before sorting = ");
   for(int i=0;i<n;i++){
        printf("%d ",C[i]);
    }printf("\n");
    char ques;
    printf("You want to sort the array in ascending or descending (A/D): ");
    scanf(" %c",&ques);
    
    switch (ques){
        case 'A':
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(C[j]>C[j+1]){
                int x=C[j+1];
                C[j+1]=C[j];
                C[j]=x;}
            }
        }  printf("The Array after sorting it in %c order = ",ques);
        for(int i=0;i<n;i++){
            printf("%d ",C[i]);
    }
                break;
                      
            
                case 'D':
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(C[j]<C[j+1]){
                int x=C[j+1];
                C[j+1]=C[j];
                C[j]=x;}
            }  }printf("The Array after sorting it in %c order = ",ques);
        for(int i=0;i<n;i++){
            printf("%d ",C[i]);
    }
        break;
        
                default:
                printf("Invalid");        
        }
    }    

 

