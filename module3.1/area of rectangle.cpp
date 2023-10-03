#include<stdio.h>
int main()
{

    float r,d,x;
    printf("enter the long side of rectangle in cm :");
    scanf("%f",&d);
    printf("enter the small side of rectangle in cm :");
    scanf("%f",&r);
    x=r*d;
    printf("area of rectangle is cm^2= %f",x);
    return 0;
}