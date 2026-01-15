#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp=4;
    // int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
           cout<<".";
        }
        nsp--;
        for(int k=1;k<=2*i-1;k++){
            //cout<<k;
            char ch=(char)('A'+ k-1);
             cout<<ch;
        }
        // nst+=2;
        cout<<"\n";
    }

    return 0;

}