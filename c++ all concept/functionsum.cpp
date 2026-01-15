#include<iostream>
using namespace std;
int add(int a, int b){
    int sum=a+b; 
    return sum;
}

int main(){
  int a=5;
  int b=6;
  cout<<add(a,b)<<endl;
}