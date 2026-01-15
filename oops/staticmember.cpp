#include<iostream>
using namespace std;
 class customer
 {
    string name;
    int account_number,balance;
    static int total_customer;
    static int total_balance;
    
    public:
    customer(string name,int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }
    static void accStatic()
    {
        cout<<"total_customer->"<<total_customer<<endl;
        cout<<"total_balance->"<<total_balance<<endl;
    }
    void deposit(int amount)
    {
        if(amount>0)
        balance+=amount;
        total_balance+=amount;
    }
    void withdraw(int amount)
    {
        if(amount>=balance&&amount<0)
        balance-amount;
        total_balance-=amount;
    }
    void display()
    {
      cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;;  
    }
 };


 int customer::total_customer=0;
 int customer::total_balance=0;


 int main()
 {
    customer a1("Tirth",1,1000);
    a1.display();
    customer a2("Adesh",1,1100);
    a2.display();
    customer a3("Asha ",1,1200);
    a3.display();
    a1.withdraw(1300);
    customer::accStatic();
    a2.deposit(200);
    customer::accStatic();
 }