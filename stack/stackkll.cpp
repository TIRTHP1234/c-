#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;
    s.push(5);
    s.push(4);     
    s.push(2);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
}