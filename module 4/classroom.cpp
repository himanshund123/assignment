#include<iostream>
#include<string>
using namespace std;

class person
{
    protected:
    string name;
    int age;

    public:
    void inputdata()
    {
        cout<<"enter the name : "<<endl;
        cin>>name;
        cout<<"enter your age : "<<endl;
        cin>>age;
    }
    void displaydata()
    {
        cout<<"person name is : "<<name<<endl;
        cout<<"person age is : "<<age<<endl;
    } 
};
class student:public person{
    private:
    double percentage;

    public:
    void inputdata(){
        cout<<"enter your percentage";
        cin>>percentage;
    }
    void displaydata(){
        cout<<"your percentage is : "<<percentage<<"%"<<endl;
    }

};
class teacher:public person{
    public:
    int salary;

    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }

};
int main(){
    person p1;
    p1.inputdata();
    teacher t1;
    t1.setsalary(25000);
    student s1;
    s1.inputdata();
    s1.displaydata();
    cout<<"teacher salary is "<<t1.getsalary()<<endl;
    return 0;
}