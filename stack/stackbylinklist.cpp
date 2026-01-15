#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;


    node(int value)
    {
        data=value;
        next=NULL;
    }
};
class stack
{
    node*top;
    int size;

    public:
    stack()
    {
        top=NULL;
        size=0;
    }
    //push
    void push(int value)
    {
        node*temp=new node(value);
        if(temp==NULL)
        {
            cout<<"stack overflow";
        }
        else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"pused->"<<value<<" into the stack\n";
        }
    }
    //pop 
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack underflow";
        }
        else 
        {
            node*temp=top;
            cout<<"popped->"<<top->data<<" from the stack\n";
            top=top->next;
            delete temp;
            size--;
        }
    }
    //peek
    int peek()
    {
        if(top==NULL)
        {
            cout<<"stack is empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    //empty
    bool empty()
    {
       if(top==NULL)
       {
        return 1;

       }
       else 
       {
        return 0;
       }
    }
    //size
    int isSize()
    {
        return size;
    }
};
int main()
{
    stack s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    cout<<s.isSize()<<endl;
    cout<<s.empty()<<endl;
}