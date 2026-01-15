#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number of star: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
        cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
    
}