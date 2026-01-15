#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int sem;
    student(string name,int sem)
    { 
        
        this->name=name;
        this->sem=sem;
        cout<<"name is "<<name<<endl;
        cout<<"sem is "<<sem;
    }
};
int main()
{
    string name;
    int sem;
    cout<<"enter name ";
    cin>>name;
    cout<<"enter sem ";
    cin>>sem;
    student a(name,sem);
}