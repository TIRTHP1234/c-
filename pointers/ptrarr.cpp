#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    //print the adress
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr+0<<endl;
    //  print the adress by ptr
    int* ptr=arr;
    cout<<&ptr[0]<<endl;
    cout<<ptr+0<<endl;
    //print the value
    cout<<arr[0]<<endl;
    cout<<*(arr+0)<<endl;
    //print all adress
    for(int i=0;i<5;i++){
        //cout<<(arr+i) <<endl;
        cout<<ptr+i<<endl;
    }
    //print all value
    for(int i=0;i<5;i++){
        //cout<<*(arr+i)<<endl;
        //cout<<ptr[i]<<endl;
        cout<<*(ptr+i)<<endl;
    }
    //print all value by arithmetic opperation
   for(int i=0;i<5;i++){
        cout<<*ptr<<endl;
        ptr++;
    } 
     }