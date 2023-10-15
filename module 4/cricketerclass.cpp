#include<iostream>
#include<string>
using namespace std;

class cricketer
{
    protected:
    string name;
    int age;

    public:
    void inputdata()
    {
        cout<<"enter the name of player : "<<endl;
        cin>>name;
        cout<<"enter the age of player : "<<endl;
        cin>>age;
    }
    void displaydata()
    {
        cout<<"player name is : "<<name<<endl;
        cout<<"player age is : "<<age<<endl;
    }   

};
class batsman:public cricketer
{
    private:
    int totalruns;
    double averagerun;
    int bestperf;
    int n;

    public:
    
    void inputuserdata(){
        cout<<"entre the players total run :"<<endl;
        cin>>totalruns;
        cout<<"enter the players bestperformance : "<<endl;
        cin>>bestperf;
        cout<<"how many time got out"<<endl;
        cin>>n;
    }
    void averageruns(){
        averagerun=totalruns/n;
    }
    void displaydata()
    {
        cout<<"player name is: "<<name<<endl;
        cout<<"players total runs : "<<totalruns<<endl;
        cout<<"player best performance is :"<<bestperf<<endl;
        cout<<"players average is :"<<averagerun<<endl;
    }

};

int main()
{
    batsman b1;
    b1.inputdata();
    b1.inputuserdata();
    b1.averageruns();
    b1.displaydata();

    return 0;
}