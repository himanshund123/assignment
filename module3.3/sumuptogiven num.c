#include<stdio.h>
int sum(int a){
    if(a>0)
    {
        return a+sum(a-1);
    }
    else
    {
        return 0;
    }
}
int main (){
    int i;
    printf("enter the number :");
    scanf("%d",&i);
    printf("additon upto number %d is %d",i,sum(i));
    return 0;
}