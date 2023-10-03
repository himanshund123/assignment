#include<stdio.h>
int main(){
    int i,j;
    int n=1;
    char ch='A';
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
    return 0;
}