#include<iostream>
#include<vector>
using namespace std;
// int sum(vector<vector<int>>& v,int l1,int r1,int l2,int r2){
//       int sum=0;
//       for(int i=l1;i<=l2;i++){
//         for(int j=r1;j<=r2;j++){
//             sum+=v[i][j];
//         }
//       }
//       return sum;
// }
// int main(){

//      int r;
//    cout<<"enter number of row:";
//    cin>>r;
//    int c;
//    cout<<"enter number of columns:";
//    cin>>c;
//    vector<vector<int>>v(r,vector<int>(c));
//    for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cin>>v[i][j];
//     }
//    }
//    int l1,r1,l2,r2;
//    cin>>l1>>r1>>l2>>r2;
//    int a= sum(v,l1,r1,l2,r2);
//    cout<<a;

// }
int sum(int x,int y){
  int result=0;
  for(int i=x;i<=y;i++){
    result+=i;
  }
  return result;
}
int main(){
  cout<<sum(2,6);

}

