#include<iostream>
using namespace std;
bool linear(int arr[],int x,int index,int size){
    if(index==size)
    return 0;
    if(arr[index]==x)
    return 1;

    linear(arr,x,index+1,size);
}
int main(){
    int arr[]={10,4,3,2};
    int x=3;
    cout<<linear(arr,x,0,3);
}