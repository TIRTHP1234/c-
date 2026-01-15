#include<iostream>
#include<cmath>
using namespace std;
int countdigite(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
bool amstrong(int num,int digite){
    int n=num,rem,ans=0;
    while(n!=0){
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digite);
    }
    if(ans==num)
     return 1;
    else 
    return 0;
}
int main(){
    int num;
    cin>>num;
    int digite =countdigite(num);
    cout<<amstrong(num,digite);
}