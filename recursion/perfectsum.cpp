#include<iostream>
using namespace std;
int print(int arr[],int index,int n,int sum)
{
   if(index==n)
   return sum==0;

   return print(arr,index+1,n,sum)+print(arr,index+1,n,sum-arr[index]);
}
int main()
{
    int arr[]={2,5,6,1};
    int sum=8;
    cout<<print(arr,0,4,sum);
}