#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void rotateArray(vector<vector<int>>& v){
    //transpoce
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            // swap(v[i][j],v[j][i]);
            int temp=v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;
        }
    }
    int j=0;
        int k=v.size()-1;
     for(int i=0;i<v.size();i++){
           while(j<k){
                int temp=v[i][j];
                v[i][j]=v[i][k];
                v[i][k]=temp;
                j++;
                k--;
           }
        }
        return ;
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
     rotateArray(v);
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<v[i][j];
        }cout<<endl;
     }
   }