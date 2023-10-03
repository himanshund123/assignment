#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2;
    printf("enter the two number :");
    scanf("%d %d",&num1,&num2);
   num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("swap number: %d %d",num1,num2);

    return 0;
}