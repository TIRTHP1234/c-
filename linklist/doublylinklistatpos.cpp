#include<iostream>
using namespace std;
 
class node
{
    public:
    int data;
    node*next;
    node*prev;

  node(int value)
  {
    data=value;
    next=NULL;
    prev=NULL;
  }
};
int main()
{
    node*head=NULL;
    int arr[]={1,2,3,4};
    for(int i=0;i<4;i++)
    {
        if(head==NULL){
        head=new node(arr[i]);
    }
    //already exist
    else{
        node*temp=new node(arr[i]);
        temp->next=head;
        head->prev=head;
        head=temp;
    }
    }
    // int pos=0;
    //inster at start
    // if(pos==0)
    // {
    // if(head==NULL)
    // {
    //     head=new node(5);
    // }
    // else{
    //     node*temp;
    //     temp=new node(5);
    //     temp->next=head;
    //     head->prev=head;
    //     head=temp;
    // }
    // }
    // else{
    // node*curr=head;
    // while(--pos)
    // {
    //     curr=curr->next;
    // };
    //  //insert at end
    //  if(curr->next==NULL){
    //     node*temp=new node(5);
    //     temp->prev=curr;
    //     curr->next=temp;
    //  }
    // //at any pos
    //  else{
    //     node*temp=new node(5);
    //     temp->next=curr->next;
    //     temp->prev=curr;
    //     curr->next=temp;
    //     temp->next->prev=temp;
    //  }
    // }
    //delete at start
    // if(head!=NULL)
    // {
    //     node*temp=head;
    //     head=head->next;

    //     if(head)
    //     head->prev=NULL;
    //     delete temp;
    // }
    //delete at end
    if(head!=NULL)
    {
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else{
            node*curr=head;
            while(curr->next)
            {
                curr=curr->next;



                curr->prev->next=NULL;
                delete curr;
            }
        }
    }
     node*trav=head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}