#include <stdio.h>
int main(){
    int arr[100],n,i,j,c,a,high,low,mid,found=0;//to swap 2 numbers we need a temporary variable that is "c" 
    //the element whivh is to be searched for is "a"
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements in array %d: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    printf("the sorted array using bubble sort technique is: ");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
    printf("\n");}
    printf("enter the element that is to be searched: ");
    scanf("%d",&a);
    low=0;high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==a){
            found=1;
            break;
        }
        else if(arr[mid]<a){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found){
    printf("the element is found at position %d",mid+1);
}
else{
    printf("the element is not found %d",a);
}
return 0;}