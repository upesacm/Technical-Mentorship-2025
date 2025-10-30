#include<stdio.h>
int main()
{
    int arr[100];
    int n,i;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int target,found=0;
    printf("enter the target element:");
    scanf("%d", &target);
    int mid,low,high;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==target)
        {
            printf("element found at position %d",mid+1);
            found=1;
            break;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else{

            high=mid-1;
        }
        }
        
    if(!found)
    {
        printf("element not found");
    }
    return 0;
}