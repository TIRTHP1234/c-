#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"after swap a = "<<a<<endl;
    cout<<"after swap b = "<<b;
    return 0;
}