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
    node*head;
    head=NULL;
    int arr[]={2,4,5,6,9};
    for(int i=0;i<5;i++)
    {
        if(head==NULL){
            head=new node(arr[i]);
        }
        else{
            node*temp;
            temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    //inster at the middel
    int x=2;//position
    int value=45;//node value
    node*temp=head;
    //moving temp to insert pos.
    while(x--){
        temp=temp->next;
    };
    //creating new node of new value 45
    node*temp2=new node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    
    temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}