#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of arrya:";
    cin>>n;
    cout<<"enter the element:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

        int key;
        cout<<"enter the key: ";
        cin>>key;
        int done =0;
        for(int i=0;i<n;i++){
            if(arr[i]==key){
            cout<<i;
            done=1;
            break;
            }
        }
        if(done==0){
        cout<<-1;
        }
        return 0;
}