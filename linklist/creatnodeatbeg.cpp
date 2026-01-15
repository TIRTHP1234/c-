// #include<iostream>
// using namespace std;
// class node
// {
// public:
// int data;
// node*next;

// node(int value){
//     //for making a node
//    data=value;
//    next=NULL;
// }
// };
// int main(){
//     node*head;
//     head=NULL;
//     int arr[]={1};
//     //insert the node at bedinning
//     //lined list dosent exist
//     for(int i=0;i<1;i++){
//     if(head==NULL)
//     {
//         head= new node(arr[i]);
//     }
//     //linked list exist karti ho
//     else
//     {
//      node*temp;
//      temp= new node(arr[i]);
//      temp->next=head;
//      head=temp;
//     }
//     //print the value 
//     node *temp=head;
//     while(temp){
//         cout<<temp->data;
//         temp=temp->next;
//     };
// }
// }
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;


    node(int value){
        data=value;
        next=NULL;
    }
};
void creatatbig(int arr[],node*&head){
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
        }
        else
        {
            node*temp;
            temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
}
int main(){
    node*head;
    head=NULL;
    int arr[]={1,2,3,4,5};
    creatatbig(arr,head);
    node*temp;
    temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}

































