#include<iostream>
using namespace std;
class customer
{
    string name;
    int balance;
    int accountnumber;

    public:
    //default constructor
    customer(){
    //  cout<<"hello tirth"<<endl;
     name="tirth";
     accountnumber=4545;
     balance=1;
     
    }
    //parameterrized constructor
    customer(string a,int b,int c)
    {
       name=a;
       accountnumber=b;
       balance=c;
    }
    customer(string name,int balance)
    {
        this->name=name;
        this->balance=balance;
    }
    //inline constructor
     // inline customer(string a,int b,int c):name(a),accountnumber(b),balance(c){
      
    // }
    void display()
    {
      cout<<name<<" ";
      cout<<accountnumber<<" ";
      cout<<balance<<" ";  
    }
};
int main()
{
    customer a1;
    a1.display(); 
    customer a2("rohit",25,10);
    a2.display();
    customer a3("tirth",999);
    a3.display();
    customer a4(a1);
    a4.display();
}