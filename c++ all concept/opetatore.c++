#include<iostream>
using namespace std;
int main(){
    int num1=5;//0101
    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;
    int num2=8;//1000
    cout<<(num1|num2)<<endl;
    cout<<(num1&num2)<<endl;
    int a=4;
    cout<<sizeof(a)<<endl;
    char name='a';
    cout<<sizeof(name)<<endl;
    bool flag;
    a==name?true:flag=false;
    cout<<flag<<endl;
    cout<<(&a)<<endl;
    a=6;
    cout<<(a++)<<endl;
    cout<<"num is "<<a<<endl;
    cout<<(++a)<<endl;
    int b=7;
    cout<<(b--)<<endl;
    cout<<"the num is:"<<b<<endl;
    cout<<(--b)<<endl;

 return 0;
}