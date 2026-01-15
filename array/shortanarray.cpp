#include<iostream>
#include<vector>
using namespace std;
void sortZeroesAndOnes(vector<int> &v){
      //  int zero=0;
      //  for(int tirth:v){
      //   if(tirth==0){
      //       zero++;
      //   }
      //  }
      //  for(int i=0;i<6;i++){
      //    if(i<zero){
      //       v[i]=0;
      //    }
      //    else{
      //       v[i]=1;
      //    }
      //  }
      int left=0;
      int right=5;
      while(left<right){
        if(v[left]==1 && v[right]==0){
         int temp=v[left];
         v[left]=v[right];
         v[right]=temp;
          left++;
          right--;
        }
        if(v[left]==0){
         v[left]++;
        }
        if(v[right]==1){
         v[right]--;
      }
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
     sortZeroesAndOnes(v);
     for(int i=0;i<n;i++){
        cout<<v[i];
     }

}