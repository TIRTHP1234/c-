#include<iostream>
using namespace std;
int main(){
  int arr[5];
  
  for(int i=0;i<5;i++){
   cout<<"enter the element"<<i<<":";
     cin>>arr[i];
  }
  cout<<endl<<"the elements is";
  for(int i=0;i<5;i++){
     cout<<arr[i];
  }
  int key;
  cout<<endl<<"type element to search"<<endl;
  cin>>key;
  for(int i=0;i<5;i++){
     if(arr[i]==key){
           cout<<"it is present in:"<<i;
     }
     
  }
  return 0;
}