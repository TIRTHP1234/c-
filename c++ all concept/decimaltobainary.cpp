#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int power=1;
    int ans=0;
    while(n>0){
        int ld=n%2;
        ans+=ld*power;
        power*=10;
        n/=2;
    }
    cout<<ans;
    return 0;
}