#include<iostream>
#include<vector>
using namespace std;
void sperial(vector<vector<int>>& v){
     int left=0;
     int right=v[0].size()-1;
     int top=0;
     int bottom=v[0].size()-1;
     int direction=0;
     while(left<=right&&top<=bottom){
     //left-right
     if(direction==0){
        for(int col=left;col<=right;col++){
          cout<<v[top][col]<<" ";
        }
       top++;
     }
     //top-bottom;
     else if(direction==1){
        for(int row=top;row<=bottom;row++){
            cout<<v[row][right]<<" ";
        }
        right--;
     }
     //right-left;
     else if(direction==2){
        for(int col=right;col>=left;col--){
            cout<<v[bottom][col]<<" ";
        }
        bottom--;
     }
     //bottom - top;
     else {
        for(int row=bottom;row>=top;row--){
            cout<<v[row][left]<<" ";
        }
        left++;
     }
     direction=(direction+1)%4;
     }
}
int main(){
     int r;
   cout<<"enter number of row:";
   cin>>r;
   int c;
   cout<<"enter number of columns:";
   cin>>c;
   vector<vector<int>>v(r,vector<int>(c));
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>v[i][j];
    }
   }
   sperial(v);
}