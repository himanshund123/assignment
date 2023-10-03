#include<stdio.h>
int main(){
    int i,j;
    int n=1;
    char ch='A';
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=5;i>1;i--)
    {
        for(j=i;j>1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}