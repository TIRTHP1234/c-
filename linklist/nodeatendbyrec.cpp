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
node*creatlinkedlist(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    node*head;
    head=new node(arr[index]);
    head->next=creatlinkedlist(arr,index+1,size);
    return head;
}
int main()
{
    node*head;
    head=NULL;
    int arr[]={5,4,5};
    head=creatlinkedlist(arr,0,3);
    node*temp;
    temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}