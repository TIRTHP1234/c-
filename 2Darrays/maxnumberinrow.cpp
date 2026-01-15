#include<iostream>
#include<vector>
using namespace std;
// int maxrow(vector<vector<int>>&v){
//      int maxones=-1;
//      int maxonesrow=-1;
//      int column=v[0].size();
//      for(int i=0;i<v.size();i++){
//          for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int numberofones= column-j;
//                 if(numberofones>maxones){
//                     maxones=numberofones;
//                     maxonesrow=i;
//                 }
//             }
//          }
//      }
//     return maxonesrow;
// }
// int main(){
//    int r;
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
//       int res=maxrow(v);
//       cout<<res<<endl;
//    }
int maxrows(vector<vector<int>>&v){
       int maxones=-1;
       int maxrow=-1;
       int column=v.size();
       for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numbersofone=column-j;
                if(numbersofone>maxones){
                    maxones=numbersofone;
                    maxrow=i;
                }
            }
          }
       }
       return maxrow;
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
   int res=maxrows(v);
   cout<<res<<endl;
}