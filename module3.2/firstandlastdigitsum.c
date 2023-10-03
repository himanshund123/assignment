#include<stdio.h>
int main(){
    int n,r,sum=0,firstdigit,lastdigit;
    printf("enter the number :");
    scanf("%d",&n);
    lastdigit=n%10;
    firstdigit=n;
    while(n>=10)
    {
        n=n/10;
    }
    firstdigit=n;
    
    sum=firstdigit+lastdigit;
    
    printf("sum of given number is %d",sum);
    return 0;
}