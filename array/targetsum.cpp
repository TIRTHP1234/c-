#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int target=7;
    int total=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(arr[i]+arr[j]==target){
            total++;
        }
        }
    }
    cout<<total;
 return 0;
} 