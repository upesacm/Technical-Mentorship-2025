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
int num,high=n-1,low=0,mid,found=0;

printf("The sorted array will be:\n");
for(i=0;i<n;i++)
{
    printf("\n%d ",arr[i]);
}
printf("Enter a number to find its index:\n");
scanf("%d",&num);
for(;high>=low;)
{
mid=(low+high)/2;    
   if(arr[mid]==num)
   {
       found=1;
       break;
   } 
   else if(arr[mid]>num)
   {
       high=mid-1;
   }
   else
   {
       low=mid+1;
   }
   
}
if (found)
printf("The index of %d is %d",num,mid);
else
printf("The number is not found.");

    return 0;
}
