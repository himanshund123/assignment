#include<iostream>
#include<string>
using namespace std;

class twostring{
    public:
    string str1;
    string str2;

    
    void setstring(string s1,string s2){
        str1=s1;
        str2=s2;
    }
    string getstring1(){
        return str1;
    }
    string getstring2(){
        return str2;
    }
    string getconcate(){
        return str1+" "+str2;
    }
};
int main(){
    twostring s;
    s.setstring("hello","himanshu");
    cout<<"first string is:"<<s.getstring1()<<endl;
    cout<<"second string is:"<<s.getstring2()<<endl;
    cout<<"concatenent string :"<<s.getconcate()<<endl;
    return 0;
}