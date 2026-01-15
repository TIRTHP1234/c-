#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int n=4;
    int k=2;
    k=k%n;
    // reverse(v.begin(),v.end());
    // reverse(v.begin(),v.end()+k-1);
    // reverse(v.begin()+k,v.end());
    for(int i=0;i<7;i++){
        cout<<v[i];
    }
    return 0;
}
