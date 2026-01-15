#include<iostream>
using namespace std;
int main(){
   int arr[5]={1,2,3,4,5};
//    cout<<sizeof(arr);//5(sizeofarray)*4bytes=20

    for(int i=0;i<arr[4];i++){
        cout<<arr[i]<<endl;
    }
   return 0;
}