#include<iostream>
using namespace std;

class stack
{
    int size;
    int *arr;
    int top;
     
    bool flag;
    public:
    stack(int s)
    {
       size=s;
       top=-1;
       arr=new int[s];
       flag=1;
    }
    //push
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"stack underflow";
        }
        else
        {
            top++;
            arr[top]=value;
            cout<<"pusher->"<<value<<" into the stack\n";
            flag=0;
//why flag=0 means we are pushing(value nakhiye) the element
//that means stach is not empty
        }
    }
    //pop
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack under flow\n";
        }
        else 
        {
            top--;
            cout<<"popped->"<<arr[top+1]<<" from stack\n";
            if(top==-1)
            flag=1;
        }
    }
    //peek
    int peek()
    {
        if(top==-1)
        {
            return -1;
        }
        else
        {
            cout<<"peek number is-> "<<arr[top];
        }
    }
    //empty
    bool empty()
    {
        if(top==-1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    int isSize()
    {
        return top+1;
    }
};

int main()
{
   stack s(5);
//    s.push(5);
//    s.push(4);
//    s.push(2);
//    s.peek();
//    cout<<s.empty()<<endl;
s.push(-1);
s.peek();
cout<<endl;
cout<<s.empty()<<endl;
}