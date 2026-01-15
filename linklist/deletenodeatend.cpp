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
int main()
{
    node *head,*tail;
    tail=head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){

        if(head==NULL){
            head=new node(arr[i]);
            tail=head;
        }
        else
        {
            tail->next=new node(arr[i]);
            tail=tail->next;
        }
    }
    //delete a node at end
    //first if we want to delete  node a node must be exist
    if(head!=NULL)
    {
     //only one node is prestnt
     if(head->next==NULL)
     {
        delete head;
        head=NULL;
     }
     else{
     //more than 1 node is present
      node*curr=head;
      node*prev=NULL;

      //we wnat to go at last so we can write
      while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
      }
      prev->next=curr->next;
      delete curr;
    }
    }




    node*temp;
    temp=head;
    while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}