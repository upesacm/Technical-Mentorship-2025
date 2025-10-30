#include <stdio.h>  

int main() {
    
int n,temp,i,j;

printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter the values of elements:\n");
int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
    }
}
printf("The array will be:\n");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
    
    return 0;
}
