#include<iostream>
using namespace std;

void reverse(int arr[],int x,int y){
  for(int i=x,j=y;i<j;i++,j--){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
   }
   return ;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=6;
    int k=3;
    k=k%n;
    reverse(arr,0,n);
    reverse(arr,0,k-1);
    reverse(arr,k,n);
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
    return 0;
}