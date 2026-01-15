#include<iostream>
using namespace std;

class node
{
    public://to get acess
    int data;
    node*next;


    node(int value){
        data=value;
        next=NULL;
    }
};
int main()
{
 node *Head;
 Head= new node(4);

 cout<<Head->data<<endl;  
 cout<<Head->next<<endl;
}