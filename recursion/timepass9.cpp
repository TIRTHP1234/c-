#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
     int* ptr=arr;
    //print adress
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<arr+1<<endl;
    //value
    cout<<*(arr+3)<<endl;
    //all values
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
        cout<<*(ptr+i)<<endl;
    }
    //all adress
    for(int i=0;i<5;i++)
    {
        cout<<arr+i<<endl;
        cout<<ptr+i<<endl;
    }
    cout<<ptr+0<<endl;
    cout<<*ptr+3<<endl;
}