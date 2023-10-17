#include<iostream>>
#include<string>
using namespace std;

class student{
    protected:
    int rollnumber;

    public:
    void setrollnumber(int r1){
        rollnumber=r1;
    }
    int getrollnumber(){
        return rollnumber;
    }

};
class test{
    protected:
    int subject1mark;
    int subject2mark;

    public:
    void setsubjectmark(int s1,int s2){
        subject1mark=s1;
        subject2mark=s2;
    }
    int getsubject1mark(){
        return subject1mark;
    }
    int getsubject2mark(){
        return subject2mark;
    }
    
};
class result:public student,public test{
    public:
    int gettotalmarks(){
        return getsubject1mark() + getsubject2mark();
    }

    void displaydata(){
        cout<<"roll number :"<<rollnumber<<endl;
        cout<<"subject 1 marks :"<<subject1mark<<endl;
        cout<<"subject 2 marks :"<<subject2mark<<endl;
        cout<<"total marks :"<<gettotalmarks()<<endl;

    }
};
int main(){
    result s1;
    s1.setrollnumber(1);
    s1.setsubjectmark(80,90);

    s1.displaydata();
}