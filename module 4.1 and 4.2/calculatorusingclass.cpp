
#include <iostream>
using namespace std;

class Calculator
{
    public:
    float a,b;
    void result()
    {
        cout<<"enter first number";
        cin>>a;
        cout<<"enetr second number";
        cin>>b;
    }
    float add()
    {
        return a+b;
    }
    float sub()
    {
        return a-b;
    }
    float mul()
    {
        return a*b;
    }
    float div()
    {
        return a/b;
    }
};



int main()
{
    int ch;
    Calculator c;
    cout<<"enter 1 for add ,2 for sub,3 for mul ,4 for div ";
    do{
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                c.result();
                cout<<"result : "<<c.add();
                break;
            }
            case 2:
            {
                c.result();
                cout<<"result : "<<c.sub();
                break;
            }
            case 3:
            {
                c.result();
                cout<<"result : "<<c.mul();
                break;
            }
            case 4:
            {
                c.result();
                cout<<"result : "<<c.div();
                break;
            }
        }
    }while(ch>=1 && ch<=4);
    return 0;
}
