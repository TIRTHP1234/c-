#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=1;
    for(int i=1;i<=b;i++){
        c=c*a;
    }
    cout<<c;
    return 0;
}

