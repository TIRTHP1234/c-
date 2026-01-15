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
    // to inster at the middel
    // int x=2;
    // int value=45;
    // node*temp=head;
    
    // while(x--){
    //     temp=temp->next;
    // };
    // node*temp2=new node(value);
    // temp2->next=temp->next;
    // temp->next=temp2;
     node*temp;
    temp=head;
    while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}