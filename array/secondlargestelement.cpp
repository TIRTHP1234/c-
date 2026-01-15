#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,44,5,6,9};
    int max=0;
    int smax=0;
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i]; 
        }
    }
    for(int i=0;i<7;i++){
        if(arr[i]>smax&&arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<smax;
}