#include<iostream>
using namespace std;

class engineer
{
    public:
    string spec;

    void work()
    {
        cout<<"my spec is"<<" "<<spec<<endl;
    }
};
class gamer
{
    public:
    int kd;

    void captainlevi()
    {
        cout<<"i have kd ratio of"<<" "<<kd<<endl;
    }
};
class coder:public engineer,public gamer
{
    public:
    string name;

    coder(string name, string spec,int kd)
    {
        this->name=name;
        this->spec=spec;
        this->kd=kd;
    }
    void display()
    {
        cout<<name<<" "<<spec<<" "<<kd<<" "<<endl;
    }
};
int main()
{
    coder a1("tirth","rusher",6);
    a1.display();
    a1.work();
    a1.captainlevi();
} 