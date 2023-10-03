#include<stdio.h>    

int main()
{
    int a[100];
    int n;
    int i;
    int max_index;
    
    printf("enter the size of array:");
    scanf("%d",&n);
    
    printf("enter the element of array.\n");
    
    for(i=0;i<n;i++)
    {   printf("value [%d]=",i);
        scanf("%d",&a[i]);
    }
    
    int max=a[0];
    
    for( i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            max_index=i;
        }
    }
    
    printf("maximum element a[%d]is =%d",max_index,max);
}