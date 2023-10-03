#include<stdio.h>
int main(){
    int n,r=0,max=0;
    printf("enter the number :");
    scanf("%d",&n);
   
    while(n>0)
    {
        r=n%10;
        {
            if(r>max)
            max=r;
        }
        n=n/10;
    }
    printf("max of given number is %d",max);
    return 0;
}