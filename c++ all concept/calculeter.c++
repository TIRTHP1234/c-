#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number: ";
    cin>>a>>b;
     
    cout<<"enter an operator(+,-,*,/,%): ";
    char operatorss;
    cin>>operatorss;
    
    switch(operatorss){
        case '+':
          cout<<"the sum is: "<<a+b<<endl;
        break;
        case '-':
          cout<<"the diff is: "<<a-b<<endl;
        break;
        case '*':
          cout<<"the mul is: "<<a*b<<endl;
        break;
        case'/':
           cout<<"the div is: "<<a/b<<endl;
        break;
        case '%':
           cout<<"the rem is: "<<a%b<<endl;
        break;
        }
     
    return 0;
    }
