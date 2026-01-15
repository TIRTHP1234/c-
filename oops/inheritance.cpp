#include<iostream>
using namespace std;
 

class human
{
    public:
    string name;
    int age,weight;
};

class student: private human
{
    private:
    int roll_no,fees;

    public:
    student(string name,int age,int weight,int roll_no,int fees)
    {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_no=roll_no;
        this->fees=fees;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<weight<<endl;
        cout<<roll_no<<endl;
        cout<<fees<<endl;
    }
};
int main()
{
   student a("aa",22,4554,290,1200000);
   a.display();
}
    