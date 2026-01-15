#include<iostream>
using namespace std;
int main(){
   int r;
   cout<<"enter number of row:";
   cin>>r;
   int c;
   cout<<"enter number of columns:";
   cin>>c;
   int arr[r][c];
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
   }
   int max=0;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(max<arr[i][j]){
            max=arr[i][j];
        }
    }
   }
   cout<<"the max is:"<<max;
    cout<<endl;
   }