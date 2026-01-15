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
// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-1-i;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }
// for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}