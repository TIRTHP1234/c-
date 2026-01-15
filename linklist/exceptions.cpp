#include<iostream>
using namespace std;

class customer
{
    string name;
    int balance,account_number;

    public:
   
    customer(string name,int balance,int account_number)
    {
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    };
    //deposit
    void deposit(int amount)
    {
        if(amount>0)
        {
            cout<<amount<<" is credited sucessfully";
            cout<<endl;
        }
        else
        {
            throw "amount should be greather then 0\n";
        }
    }
    //withdraw
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
           cout<<amount<<" is debited sucessfully\n"; 
        }
        else if(amount<0)
        {
            throw "amount should be greather then 0\n";
        }
        else{
            throw "your balance is low\n";
        }
    }
};
int main()
{
    customer A1("Tirth",99,4545);
    try{
    A1.deposit(100);
    A1.withdraw(2000);
    }
    catch(const char *e)
    {
        cout<<"exception occired->"<<e<<endl;
    }
}