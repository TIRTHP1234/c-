#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>v){
  int sum=0;
  for(int i=0;i<v.size();i++){
    sum+=v[i];
    v[i]=sum;
    cout<<sum<<endl;
  }

}
int main(){
  vector<int>v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int ele; cin>>ele;
     v.push_back(ele);
  }
  sum(v);
}