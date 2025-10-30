#include<stdio.h>
void asending(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }
}
void desending(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }
}
int main()
{
    int arr[100],i,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter 1 for asending order and 2 for desending order:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        asending(arr,n);
        printf("asending order:");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
            printf(" ");

        }
        break;
        case 2:
        desending(arr,n);
        printf("desending order:");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
            printf(" ");
            
        }
        break;

        default:
        printf("invalid choice");

    }
    return 0;
}