#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("enter the year :");
    scanf("%d",&x);
    if(x%4==0)
    {
        printf("%d is leap year",x);
    }
    else
    {
        printf("%d is not leap year ",x);
    }
    return 0;
}