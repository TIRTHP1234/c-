#include<iostream>
using namespace std;
bool checkpal(string &str,int start,int end){
    // base conditation
    if(start>=end)
    return 1;
    // not match
    if(str[start]!=str[end])
    return 0;
    // match then we have to chack for
    //  other element
    checkpal(str,start+1,end-1);
}
int main(){
   string str="mom";
   cout<<checkpal(str,0,2);  
}