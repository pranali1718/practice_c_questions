#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int size ;
    int array[size]; 
    int sum= 0;
    printf("ENter the size: ");
    scanf("%d",&size);
    
    printf("\nEnter Elements: ");
    for(int i=0; i<size ;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("\n array ele are : ");
    for(int i=0;i<size ;i++)
    {
        printf(" %d",array[i]);
    }
     
    printf("\nSum of ele are : ");
    for(int i=0;i<size ;i++)
    {
        sum=sum+array[i];
    }
    printf("%d",sum);
    return 0;
}
