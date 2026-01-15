#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==4||j==6){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // int m;
//     // cin>>m;
//     for(int i=1;i<=n-2;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||j==1||i==4||j==6){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }

//     return 0;
// }
// out put is 
// 123456
// 1    6
// 1    6
// 123456