#include <stdio.h>
int main(){
    
int a,temporary,i,j;
    
printf("Enter a number: ");
scanf("%d", &a);

int array[a];

for(i=0;i<a;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}

for(i=0;i<a-1;i++)
{
    for(j=0 ; j<a-1-i ; j++)
    {
        if( array[j] > array[j+1] )
        {
        temporary=array[j];
        array[j]=array[j+1];
        array[j+1]=temporary;
        }  
    }
}
   
   printf("New sorted array is:\n");
for(i=0;i<a;i++)
{
printf("%d ", array[i]);
}  
    
    return 0;
}
