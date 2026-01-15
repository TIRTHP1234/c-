#include<iostream>
using namespace std;
class student
{
    public:
    void print()
    {
        cout<<"i am student";
    }
};
class male
{
    public:
    void maleprint()
    {
        cout<<"i am male";
    }
};
class female
{
    public:
    void femaleprint()
    {
        cout<<"i am female";
    }
};
class boy:public student,public male
{
    public:
    void boyprint()
    {
        cout<<"i am boy";
    }
};
class girl:public student, public female
{
    public:
    void girlprint()
    {
        cout<<"i am girl";
    }
};
int main()
{
    girl g1;
    g1.print();
}
