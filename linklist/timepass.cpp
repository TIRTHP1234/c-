#include<iostream>
using namespace std;
 struct student{
    string name;
    int rollno;
    int sem;
}s[10];
int main()
{
    cout<<"enter details"<<endl;
    for(int i=1;i<=2;i++)
    {
        cout<<"enter name of "<<i<<" studeny";
        cin>>s[i].name;
        cout<<"enter roll no";
        cin>>s[i].rollno;
        cout<<"enter sem";
        cin>>s[i].sem;
    }
    cout<<"display information"<<endl;
    for(int i=1;i<=2;i++){
    cout<<"name is"<<s[i].name;
    cout<<"rollno is"<<s[i].rollno;
    cout<<"sem is"<<s[i].sem;
    }
}