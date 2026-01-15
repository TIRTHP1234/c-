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
int main(){
    node*head,*tail;
    tail=head=NULL;
    int arr[]={2,4,5,9};
    for(int i=0;i<4;i++)
    {
        if(head==NULL)
        {
            head=new node(arr[i]);
            tail=head;
        }
        else
        {
            
            tail->next=new node(arr[i]);
            tail=tail->next;
        }
    }
    //delete a node at big
    if(head!=NULL)
    {
       node*temp=head;
       head=temp->next;
       delete temp; 
    }
    node*temp;
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}