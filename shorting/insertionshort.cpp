#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"enter the element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        for(int j=n-1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
     }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}