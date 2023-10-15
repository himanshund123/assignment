#include<iostream>
using namespace std;

inline int square (int a){
    return a*a;
}
inline int cubic(int a){
    return a*a*a;
}

int main()
{
    int a;
    cout<<"enter the number for to get square and cubic value";
    cin>>a;
    cout<<"suqare of number is "<<square(a)<<endl;
    cout<<"cubic of number is "<<cubic(a)<<endl;
    return 0;
}