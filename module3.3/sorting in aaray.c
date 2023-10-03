#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int display(int *a,int *b,int n)
{
    printf("\nfirst sorted array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nsecond sorted array is :");
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}
int ascend(int *a,int *b,int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(a[j]>a[i])
            {
                swap(&a[j],&a[i]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(b[j]>b[i])
            {
                swap(&b[j],&b[i]);
            }
        }
    }
    return display(a,b,size);
}
int decend(int *a, int *b, int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[j]<a[i])
            {
                swap(&a[j],&a[i]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(b[j]<b[i])
            {
                swap(&b[j],&b[i]);
            }
        }
    }
    return display(a,b,size);
}

int main()
{
    int a[100];
    int b[100];
    int n;
    int choice;
    printf("how many value want to store :");
    scanf("%d",&n);
    printf("\nenter the value of first array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenetr the value of second array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nfor assending press 1 and descending press 2");
    printf("\nchoice for array ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        ascend(a,b,n);
        break;
        case 2:
        decend(a,b,n);
        break;
        default:printf("invalid");
    }
}