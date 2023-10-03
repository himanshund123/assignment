#include<stdio.h>
#include<math.h>
int main()
{
    int num,c=0;
    printf("enter the number :");
    scanf("%d",&num);
    (num%2==0)?printf("yes %d is even number",num):printf("%d is not even number ",num);

    return 0;
}