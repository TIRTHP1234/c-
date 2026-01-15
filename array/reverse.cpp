#include<iostream>
using namespace std;
// void reverse(int arr[]){
//    int i=0;
//    int j=6;
//    while(i<j){
//       int temp=arr[i];
//       arr[i]=arr[j];
//       arr[j]=temp;
//       j--;
//       i++;
//    }
//    return ;
// }
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     // reverse(arr);
//     // for(int i=1,j=4;i<=j;i++,j--){
//     //   int temp=arr[i];
//     //   arr[i]=arr[j];
//     //   arr[j]=temp;
//     // }
//     for(int i=0;i<7;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        cout<<arr[i];
    }
}