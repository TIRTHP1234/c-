#include<iostream>
using namespace std;
int main(){
    //adress printing
    int a=10;
    cout<<&a<<endl;
    //second method to print adress
    int* ptr=&a;
    cout<<ptr<<endl;
    //for float to print adress
    float b=2.2;
    cout<<&b<<endl;
    //second method to print adress for float
    float *ptr1=&b;
    cout<<*ptr1<<endl;
}