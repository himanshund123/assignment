#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter the value from 0 to 6 for days :");
    scanf("%d",&a);
    switch(a){
    case 0:
    {
        printf("this is sunday");
        break;
    }
    case 1:
    {
        printf("this is monday");
        break;
    }
     case 2:
    {
        printf("this is tuesday");
        break;
        
    }
     case 3:
    {
        printf("this is wednesday");
        break;
    }
     case 4:
    {
        printf("this is thursday");
        break;
    }
     case 5:
    {
        printf("this is friday");
        break;
        
    }
     case 6:
    {
        printf("this is saturday");
        break;
    }
    return 0;
    }
}