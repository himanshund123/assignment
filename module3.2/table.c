#include<stdio.h>
int main()
{
    int n;
    int num;
    printf("enter the number of table ");
    scanf("%d",&n);
    printf("table of %d is ",n);
    for(int i=0;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,(n*i));
    }
}