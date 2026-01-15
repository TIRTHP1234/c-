#include<iostream>
using namespace std;
class human
{
    public:
    string name;
    void display()
    {
        cout<<"my name is"<<name<<endl;
    }
};
class engineer:public virtual human
{
    public:
    string spec;

};
class gamer:public virtual human
{
    public:
    int kd;

    
};
class coder:public engineer,public gamer
{
    public:
    int salary;

    coder(string name, string spec,int kd,int salary)
    {
        this->name=name;
        this->spec=spec;
        this->kd=kd;
        this->salary=salary;
    }
    void display()
    {
        cout<<name<<" "<<spec<<" "<<kd<<" "<<salary<<endl;
    }
};
int main()
{
    coder a1("tirth","rusher",6,99);
    a1.display();
    // a1.work();
    // a1.captainlevi();
    
} 