#include<iostream>
using namespace std;
int main()
{
    int result=0,orgnum,num,rem;
    cin>>num;
    orgnum=num;
    while(orgnum){
        rem=orgnum%10;
        result=result+rem*rem*rem;
        orgnum/=10;
    }
    if(result==num){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}