#include<iostream>
#include<vector>
using namespace std;
void subsequence(string s,int index,int n,vector<string> &ans,string temp)
{
  
if(index==n)
{
ans.push_back(temp);
return ;
} 

//not include
subsequence(s,index+1,n,ans,temp);
//include
temp.push_back(s[index]);
subsequence(s,index+1,n,ans,temp);

}
int main()
{
   string s="abc";
   vector<string> ans;
   string temp;
   subsequence(s,0,3,ans,temp);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
    cout<<endl;
   }
}