#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    try{
    if(b==0)
    throw "divided by zero is not possilbe";

    int c=a/b;
    cout<<c<<endl;
    }
    catch(const char *e)
    {
        cout<<"exceptation occure->"<<e<<endl;
    }
}