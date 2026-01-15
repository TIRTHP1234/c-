#include<iostream>
using namespace std;
int main(){
    // int arr[6]={9,1,4,6,5,3};
    // for(int i=0;i<5;i++){
    //     int index=i;
    //     for(int j=i+1;j<6;j++){
    //         if(arr[j]<arr[index]){
    //             index=j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }
    //   for(int i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    //   }
    int arr[]={9,1,4,6,5,3};
    for(int i=0;i<5-1;i++){
        int index=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
}