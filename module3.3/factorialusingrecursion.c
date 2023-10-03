#include<stdio.h>
int fact(int a){
    if(a>=1)
    {
       return a*fact(a-1);
    }
    else
    {
        return 1;
    }
}
int main (){
    int i;
    printf("enter the number :");
    scanf("%d",&i);
    printf("factorial of number %d is %d",i,fact(i));
    return 0;
}