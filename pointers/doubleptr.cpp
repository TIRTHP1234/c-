#include<iostream>
using namespace std;
int main(){
    int n=10;
    int* p=&n;//single pointer
    int**p2=&p;//double pointers
    int***p3=&p2;
    cout<<p<<endl;
    cout<<p2<<endl;
    cout<<&p<<endl;
    cout<<p3<<endl;
    cout<<&p2<<endl;
    // *p+=5;//update value by single pointers;
    // cout<<*p<<endl;
    // **p2+=5;//upade value by two pointer
    // cout<<**p2<<endl;
    ***p3+=5;//update value by three pointers
    cout<<***p3<<endl;

}