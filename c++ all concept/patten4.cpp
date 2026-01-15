#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp=3;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){//n-i
            cout<<" ";
        }
        nsp--;
        for(int j=1;j<=nst;j++){//2*i-1
            cout<<"*";
        }
        nst+=2;
        cout<<"\n";
    }
    return 0;
}