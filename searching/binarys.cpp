#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
  //start,end,mid
  int start=0,end=n-1,mid;
  while(start<=end)
  {
     //mid find karo
     mid=(start+end)/2;
     //arr[mid]==key
     if(arr[mid]==key)
     return mid;
     //arr[mid]<key isme hamko right jana he isliya
      else if(arr[mid]<key)
      start=mid+1;
      //arr[mid]<key isme hamko left jana he isliya
     else
      end=mid-1;
  }
  return -1;
  
}
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of arrya:";
    cin>>n;
    cout<<"enter the element:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

        int key;
        cout<<"enter the key: ";
        cin>>key;
        cout<<binarysearch(arr,n,key);
}