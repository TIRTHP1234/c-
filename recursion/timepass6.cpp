#include<iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"enter operator +,-,/,*";
    cin>>op;
    cin>>a>>b;
    switch(op)
    {
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;

    }
}