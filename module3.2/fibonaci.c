#include<stdio.h>
int main()
{
    int n;
    
    printf("enter the number");
    scanf("%d",&n);
    int t1=0,t2=1;
    int t3=t1+t2;
    printf(" fabio sereis is %d %d ",t1,t2);
    for(int i=3;i<=n;++i)
    {
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    

    
   return 0;
}