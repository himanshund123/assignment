#include<iostream>
using namespace std;
int add(int ,int);
int sub(int,int);
int multi(int,int);
double div(double,double);

int main(){
    int a,b,c,d,e,f;
    double j,k;
    cout<<"enter two number :"<<endl;
    cin>>a>>b;
    cout<<"enter two number for sub"<<endl;
    cin>>c>>d;
    cout<<"enter two num for multi"<<endl;
    cin>>e>>f;
    cout<<"enetr two num for divison"<<endl;
    cin>>j>>k;


    cout<<"add of tewo num is :"<<add(a,b)<<endl;
    cout<<"sub of tewo num is :"<<sub(c,d)<<endl;
    cout<<"multi of tewo num is :"<<multi(e,f)<<endl;
    cout<<"divi of tewo num is :"<<div(j,k)<<endl;
return 0;
}
int add(int a,int b){
    return (a+b);
}
int sub(int c,int d){
    return (c-d);
}
int multi(int e,int f){
    return (e*f);
}
double div(double j,double k){
    if(k==0){
        cout<<"cant devide"<<endl;
    }
    else{
        return (j/k);
    }
}