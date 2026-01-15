#include<iostream>
using namespace std;
void printtt(int &a,int &c){
      a=100;
      c=110;
 }
int main(){
    int c=6;
    int a=5;
      
      printtt(a,c);
      cout<<a<<c;
    
    return 0;

}