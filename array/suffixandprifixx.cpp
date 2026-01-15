#include<iostream>
#include<vector>
using namespace std;
bool checksum(vector<int>v){
    int totalsum=0;
    for(int i=0;i<v.size();i++){
       totalsum+=v[i];
    }
    int prefix=0;
    for(int i=0;i<v.size();i++){
       prefix+=v[i];
       int ans=totalsum-prefix;
       if(ans==prefix){
        return true;
       }
    }
    return false;
}
int main(){
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int ele; cin>>ele;
    v.push_back(ele);
  }
  cout<<checksum(v);
}
// 6 2 4 3 1
//totalsum=16
//prifix=6+2=8
//suffix=16-6=10-2=8