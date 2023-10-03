#include<stdio.h>
#include<math.h>
int main()
{

    float r,d,x;
    printf("enter the base cm :");
    scanf("%f",&d);
    printf("enter the hight cm :");
    scanf("%f",&r);
    x=(r*d)/2;
    printf("area of triangle is cm^2= %f",x);
    return 0;
}