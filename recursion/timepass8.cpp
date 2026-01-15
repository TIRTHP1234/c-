#include<iostream>
using namespace std;
int main()
{
    int arr[]={122,2,3,66,5};
    int max=0;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
        max=arr[i];
        }
    }
    cout<<max;
}