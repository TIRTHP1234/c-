#include<iostream>
using namespace std;
int main(){
    char arr[5]="1234";
    char *ptr=arr;
    //to print value in char
    cout<<arr<<endl;
    cout<<ptr<<endl;
    //to print adress 
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;
    //print address in char
    char name = 'a';
    char* ptr1= &name;
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr1<<endl;
}
