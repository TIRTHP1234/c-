#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp=3;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int k=1;k<=nsp;k++){//n-i
            cout<<" ";
        }
        nsp--;
        for(int j=1;j<=i;j++){//2*i-1
            cout<<j;
        }
        for(int j=1;j<=i-1;j++){//2*i-1
            cout<<a;
            a--;
        }
        cout<<"\n";
    }
    return 0;
}