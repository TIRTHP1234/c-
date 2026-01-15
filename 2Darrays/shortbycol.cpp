#include<iostream>
#include<vector>
using namespace std;
void fun(int arr[][4],int r,int c){
	 for(int i=0;i<r;i++){
		int start=0,end=c-1;
		while(start<=end){
			swap(arr[i][start],arr[i][end]);
			start++,end--;
		}
	 }
}
int main(){
   int arr[3][4]={5,4,6,7,1,2,3,4,5,3,2,1};
   fun(arr,3,4);
   for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<arr[i][j]<<" "<<endl;
	}
   }
}