#include<iostream>
using namespace std;
class human{
    public:
    string name;
    void work()
    {
        cout<<"i am working";
    }
};
class student: public human{
    public:
    int age;
    void get(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<name<<" "<<age<<" ";
    }
};
int main()
{
    // student a("tirth",3);
    // a.display();
    // cout<<endl;
    // a.work();
    string name;
    int age;
    cout<<"name is";
    cin>>name;
    cout<<"age is";
    cin>>age;
    student a;
    a.get (name,age);
    a.display();
}