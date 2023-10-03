#include<iostream>
using namespace std;
int area(int ,int );
float area(float ,float );
int area(int );
int main()
{
    int a,b,o;
    float A,B;
    cout<<"enter the area and breadth of rectangle";
    cin>>a>>b;
    cout<<"enter the area and breadth of triangle";
    cin>>A>>B;
    cout<<"enter the area for the circle";
    cin>>o;
    
    cout<<"\narea for rectangle is "<<area(a,b);
    cout<<"\narea for trianagle is "<<area(A,B);
    cout<<"\narea for circle is "<<area(o);
    
}
int area(int a,int b)
{
    return(a*b);
}
float area(float A,float B)
{
    return(A*B/2);
}
int area(int o)
{
    return(3.14*(o*o));
}