#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    int c=a+b;
    cout<<"the sum of a and b is: "<<c<<endl;
    // int a,b;
    // cin>>a>>b;
    // cout<<"the sum is: "<<a+b<<endl;
    cout<<"the diff is: "<<a-b<<endl;
    cout<<"the product is: "<<a*b<<endl;
    int n=6;
    cout<<"the ans is: "<<(n++)<<endl;
    cout<<n<<endl;
    cout<<"the ans is: "<<(++n)<<endl;
    return 0;
}