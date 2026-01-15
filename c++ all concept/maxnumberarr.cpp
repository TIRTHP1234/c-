#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,6,8,9,1};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}