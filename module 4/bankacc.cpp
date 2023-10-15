#include<iostream>
#include<string>
using namespace std;


class bankaccount
{
    private:
    string accname;
    int accnumber;
    string acctype;
    double accbalance;


    public:
    bankaccount(string name,int number,string type)
    {
        accname=name;
        accnumber=number;
        acctype=type;
        accbalance=0;

    }
    void setaccname(string name)
    {
        accname=name;
    }
    string getaccname(){
        return accname;
    }
    void setaccnumber(int number)
    {
        accnumber=number;
    }
    int getaccnumber(){
        return accnumber;
    }
    void setacctype(string type)
    {
        acctype=type;
    }
    string getacctype(){
        return acctype;
    }
    double getbalance(){
        return accbalance;
    }
    
    void deposit(double amount)
    {
        if(amount>0)
        {
            accbalance=accbalance+amount;
            cout<<"deposite amount is : "<<amount<<"and total balance in account is : "<<accbalance<<endl;
        }
        else{
            cout<<"invalid amount please enter higher than zero amount"<<endl;
        }
    }
    void withdraw(double amount)
    {
        if(amount<0)
        {
            cout<<"insufficient balance please add some funds"<<endl;
        }
        else if(amount>0 && amount<=accbalance)
        {
            accbalance=accbalance-amount;
            cout<<"withdrawing amount is : "<<amount<<" "<<" balance amount is : "<<accbalance<<endl;
            
        }
    } 
    void displayinfo()
    {
        cout<<"account information of member "<<endl;
        cout<<"account holder name is : "<<accname<<endl;;
        cout<<"account holder account number is : "<<accnumber<<endl;
        cout<<"account holder account type is : "<<acctype<<endl;
        cout<<"account balance is : "<<accbalance<<endl;
    }

};

int main()
{
    bankaccount account1("himanshu",543212345,"saving");
    
    account1.deposit(150000);
    account1.withdraw(2000);
    account1.getaccname();
    cout<<"account name is : "<<account1.getaccname();
    return 0;
}