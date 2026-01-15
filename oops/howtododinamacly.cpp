#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    char section;
};
int main()
{
    student*s=new student;
    (*s).name="tirth";
    (*s).rollno=290;
    (*s).section='G';

    cout<<s->name<<endl;
    cout<<s->rollno<<endl;
    cout<<s->section;
}