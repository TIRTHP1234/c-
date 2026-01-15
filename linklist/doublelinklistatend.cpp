#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;

    node (int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
int main()
{
    node*head=NULL;
    node*tail=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(head==NULL)
        {
            head=new node(arr[i]);
            tail=head;
        }
        else
        {
            node*temp=new node(arr[i]);
            temp->prev=tail;
            tail->next=temp;
            tail=tail->next;
        }
    };
    node*trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}