#include<stdio.h>
#include<math.h>
int main()
{

    float r,d,x,p;
    printf("enter the principal amount:");
    scanf("%f",&d);
    printf("enter the rate of interest :");
    scanf("%f",&r);
    printf("enter the time period :");
    scanf("%f",&x);
    p=d*r*x/100;
    printf("simple intrest = %f",p);
    return 0;
}