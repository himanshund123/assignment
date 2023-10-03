#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n;
    int s[100];
    int oddsum=0;
    int evensum=0;
    int i;
    printf("enter the size of array :");
    scanf("%d",&n);
  
    printf("enter the values :\n");
    for(i=0;i<n;i++)
    {
        printf("\nvalues s[%d]= ",i);
        scanf("%d",&s[i]);
    }
    
    printf("even numbers are :");
    for(i=0;i<n;i++)
    {
        if(s[i]%2==0)
        
        
        printf("\n%d",s[i]);
       
        
    }
    printf("\nodd numbers are :");
    for(i=0;i<n;i++)
    {
        if(s[i]%2==1)
        printf("\n%d",s[i]);
    }
    for (i=0;i<n;i++)
    {
        if(s[i]%2==0)
        {
            evensum=evensum+s[i];
        }
        else
        {
            oddsum=oddsum+s[i];
        }
    }
    printf("\n sum of even number %d",evensum);
    printf("\n sum of odd number %d",oddsum);
    
}