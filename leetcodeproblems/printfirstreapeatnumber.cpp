#include<iostream>
using namespace std;
int main(){
    int flag=0;
    int store=0;
    int arr[5]={1,2,3,2,3};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                store=arr[i];
                flag=1;
            }
        }
        if(flag==1){
        break;
        }
    }
    cout<<store;
    } 