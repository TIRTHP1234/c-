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
   cout<<"enter the elements:"<<endl;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
   }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
        cout<<"the transpoce is:"<<endl;
   for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        cout<<arr[j][i]<<" ";
    }cout<<endl;
   }
   }




   //    int tran[c][r];
//    for(int i=0;i<c;i++){
//     for(int j=0;j<r;j++){
//         tran[i][j]=arr[j][i];
//     }
//    }
