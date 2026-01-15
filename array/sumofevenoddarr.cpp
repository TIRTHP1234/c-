#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,1,2,1,2};
    int even=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }
    }
    int odd=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2!=0){
            odd+=arr[i];
        }
    }
    cout<<odd-even;
 return 0;
    
}