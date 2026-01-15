#include<iostream>
using namespace std;
//queue using array
class queue
{
    int *arr;
    int front,rear,size;

    public:
    queue(int n)
    {
        arr=new int[n];
        size=n;
        front=rear=-1;
    }
    //empty
    bool isempty()
    {
        return front==-1;
    }
    //full
    bool isfull()
    {
        return rear==size-1;
    }
    //push element
    void push(int x)
    {
        //empty
        if(isempty())
        {
            cout<<" pussed "<<x<<" into the queue";
            front=rear=0;
            arr[0]=x;
            return ;
        }
        //full
        else if(isfull())
        {
            cout<<"queue overflow";
            return ;
        }
        //insert
        else
        {
            rear=rear+1;
            arr[rear]=x;
            cout<<" pussed "<<x<<" into the queue";
        }
    }
    //pop
    void pop()
    {
        //empty
        if(isempty())
        {
            cout<<"queue underflow";
            return ;
        }
        else
        {
            cout<<" popped "<<arr[front]<<" into the queue";
            if(front==rear)
            front=rear=-1;
            else{
                cout<<" popped "<<arr[front]<<" into the queue";
                front=front+1;
            }
        }
       
    }
    int start()
    {
        if(isempty())
        {
            cout<<"queue is empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main()
{
   queue q(5);
   q.push(45);
}
