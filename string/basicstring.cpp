#include<iostream>
using namespace std;
int main(){
    char arr[]="apple";//string s="apple";
    cout<<arr;
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    string s;
    getline(cin,s);//to print whole sentance with space 
    cout<<s<<endl;
    cout<<s.size();
    cout<<endl;
    string s1="tirth",s2="patel";//to join
    string s3=s1+s2;//s3=s1.append(s2);
    s3.push_back('p');
    cout<<s3<<endl;;

    string s4="tirth";
    for(int i=s4.size();i>=0;i--){
        cout<<s4[i];
    }
}