#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v;
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    //  v.push_back(2);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    // v.push_back(5);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    //  v.resize(10);
    //  cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
    // v.pop_back();
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;
      

//    vector<int>v1;
//    v1.push_back(1);
//    v1.push_back(2);
//    v1.push_back(3);
//    v1.push_back(4);
//    v1.push_back(5);
//    cout<<"size: "<<v1.size()<<endl;
//    cout<<"capacity:"<<v1.capacity()<<endl;
//    //erase last element;
//    v1.pop_back();
//    cout<<"size: "<<v1.size()<<endl;
//    cout<<"capacity:"<<v1.capacity()<<endl;
//    //erase particulat element
//    v1.erase(v1.begin()+1);
//    for(int i=0;i<v1.size();i++)
//    cout<<v1[i]<<" ";
//    //insert element
//    v1.insert(v1.begin()+1,2);
//    cout<<endl;
//    for(int i=0;i<v1.size();i++)
//    cout<<v1[i]<<" ";
//    //update value
//    v1[3]=5;
//    cout<<endl;
//    for(int i=0;i<v1.size();i++)
//    cout<<v1[i]<<" ";
//    //erase all element
// //    cout<<endl;
// //    v1.clear();
// //    cout<<"size: "<<v1.size()<<endl;
// //    cout<<"capacity:"<<v1.capacity()<<endl;
//    //print first element
//    cout<<endl;
//    cout<<v1.front()<<endl;
//    cout<<v1[0]<<endl;
//    //print last element
//    cout<<v1.back()<<endl;
//    cout<<v1[v1.size()-1]<<endl;
//    //copy elemnts of 1 vector to another
//    vector<int>a;
//    a=v1;
//     for(int i=0;i<a.size();i++)
//     cout<<a[i]<<" ";

   vector<int>v2;
   v2.push_back(7);
   v2.push_back(3);
   v2.push_back(1);
   v2.push_back(6);
   v2.push_back(8);
   //sort in increasing order
   sort(v2.begin(),v2.end());
   for(int i=0;i<v2.size();i++)
   cout<<v2[i]<<" ";
   //sort in decreasing order
   sort(v2.begin(),v2.end(),greater<int>());
   for(int i=0;i<v2.size();i++)
   cout<<v2[i]<<" ";

   //search in binary search
   cout<<binary_search(v2.begin(),v2.end(),8);
   //max and min
   int max=max_element(v2.begin,v2.end());
   int min=min_element(v2.begin,v2.end());
    return 0;
}