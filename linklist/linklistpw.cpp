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
void creatatend(node*&head,node*&tail,int data)
{
   
    if(head==NULL){
      head=new node(data);
      tail=head;
   }
   else{
      tail->next=new node(data);
      tail=tail->next;
   }
  
}
void atpos(node*head,node*tail,int data,int x){
    node*temp;
    temp=head;
    while(x--){
        temp=temp->next;
    };
    node*temp2=new node(data);
    temp2->next=temp->next;
    temp->next=temp2;

}
void start(node*&head,node*&tail,int data){
    if(head==NULL){
      head=new node(data);
      tail=head;
    }
    else{
      node*temp;
    temp=new node(data);
    temp->next=head;
    head=temp;   
    }
} 
void display(node*head)
{
   node*temp;
   temp=head;
   while(temp)
   {
      cout<<temp->data<<" ";
      temp=temp->next;
   }
}
int main()
{
   node*head,*tail;
   tail=head=NULL;
   start(head,tail,45);
   start(head,tail,9);
   creatatend(head,tail,1);
   creatatend(head,tail,2);
   atpos(head,tail,45,2);
   display(head);
   // cout<<head->next->next->next->data;
}
