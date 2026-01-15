#include<iostream>
using namespace std;
class student{
    string name;
    int rollno;
    int m1;
    int m2;
    int sem;
    public:
    void setinfo(string name,int rollno,int sem,int m1,int m2)
    {
        this->name=name;
        this->rollno=rollno;
        this->sem=sem;
        this->m1=m1;
        this->m2=m2;
    }
    void display()
    {
        cout<<"name is "<<name<<endl;
        cout<<"rollno is "<<rollno<<endl;
        cout<<"sem is "<<sem<<endl;
        cout<<"marks of m1"<<m1<<endl;
        cout<<"marks of m2"<<m2<<endl;
    }
};
int main()
{
   student a[10];
   string name;
    int rollno;
    int m1;
    int m2;
    int sem;
   int n;
   cout<<"enter the size";
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cout<<"enter the name of student";
    cin>>name;
    cout<<"enter the rollno";
    cin>>rollno;
    cout<<"enter the sem";
    cin>>sem;
    cout<<"enter the matrks m1";
    cin>>m1;
    cout<<"enter the marks of m2";
    cin>>m2;
    a[i].setinfo(name,rollno,sem,m1,m2);
   }
   for(int i=0;i<n;i++)
   {
    a[i].display();
   }
}