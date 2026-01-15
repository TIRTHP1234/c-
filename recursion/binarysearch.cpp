#include<iostream>
using namespace std;
bool tirth(int arr[],int start,int end,int target){
    
    if(start>end)
    return 0;

    int mid = start+(end-start)/2;
    if(arr[mid]==target)
    return 1;
    else if(arr[mid]<target)
    return tirth(arr,mid+1,end,target);
    else 
    return tirth(arr,start,mid-1,target);
}
int main(){
    int arr[]={2,3,4,1,5,9};
    int target =9;
    cout<<tirth(arr,0,5,target);
}